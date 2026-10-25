// Fill out your copyright notice in the Description page of Project Settings.


#include "yenPathfinder.h"

TArray<FRoutePathResult> yenPathfinder::FindPaths(ARouteGraphManager& GraphManager,int32 StartIndex,int32 GoalIndex,int32 K)
{
    // 최종적으로 채택한 경로 목록
    TArray<FRoutePathResult> AcceptedPaths;

    if (K <= 0)
    {
        return AcceptedPaths;
    }

    // 첫 번째 최소 비용 경로는 기존 A*로 탐색
    const FRoutePathResult FirstPath =GraphManager.FindPathAStar(StartIndex, GoalIndex);

    if (!FirstPath.bFound)
    {
        return AcceptedPaths;
    }

    AcceptedPaths.Add(FirstPath);

    // 이후 대체 경로를 탐색하는 Yen 로직 추가
    TArray<FRoutePathResult> CandidatePaths;

    //  두 번째 경로부터 최대 K개까지 탐색
    while (AcceptedPaths.Num() < K)
    {
        // 직전에 채택한 경로를 기준으로 분기점을 설정
        const FRoutePathResult PreviousPath = AcceptedPaths.Last();

        // 목적지는 분기점으로 사용하지 않음
        for (int32 SpurPosition = 0;
            SpurPosition < PreviousPath.NodeIndices.Num() - 1;
            ++SpurPosition)
        {
            const int32 SpurNode =
                PreviousPath.NodeIndices[SpurPosition];

            // 출발점부터 분기점까지 유지할 앞부분
            TArray<int32> RootNodes;
            TArray<int32> RootEdges;

            for (int32 i = 0; i <= SpurPosition; ++i)
            {
                RootNodes.Add(PreviousPath.NodeIndices[i]);
            }

            for (int32 i = 0; i < SpurPosition; ++i)
            {
                RootEdges.Add(PreviousPath.EdgeIndices[i]);
            }

            TSet<int32> ExcludedNodes;
            TSet<int32> ExcludedEdges;

            //  앞부분의 노드로 되돌아가지 못하게 제외
            // 분기점 자체는 제외하지 않음
            for (int32 i = 0; i < RootNodes.Num() - 1; ++i)
            {
                ExcludedNodes.Add(RootNodes[i]);
            }

            // 같은 앞부분을 가진 채택 경로들의
            // 다음 간선을 제외해서 다른 길로 분기하도록 함
            for (const FRoutePathResult& Accepted : AcceptedPaths)
            {
                if (Accepted.NodeIndices.Num() <= SpurPosition ||
                    Accepted.EdgeIndices.Num() <= SpurPosition)
                {
                    continue;
                }

                bool bSameRoot = true;

                // 노드 순서 비교
                for (int32 i = 0; i < RootNodes.Num(); ++i)
                {
                    if (Accepted.NodeIndices[i] != RootNodes[i])
                    {
                        bSameRoot = false;
                        break;
                    }
                }

                // 같은 노드 사이에 여러 간선이 있을 수 있어
                // 간선 순서도 함께 비교
                if (bSameRoot)
                {
                    for (int32 i = 0; i < RootEdges.Num(); ++i)
                    {
                        if (Accepted.EdgeIndices[i] != RootEdges[i])
                        {
                            bSameRoot = false;
                            break;
                        }
                    }
                }

                if (bSameRoot)
                {
                    ExcludedEdges.Add(Accepted.EdgeIndices[SpurPosition]);
                }
            }

            // 분기점부터 목적지까지 A* 재탐색
            const FRoutePathResult SpurPath =GraphManager.FindPathAStarInternal(SpurNode,GoalIndex,ExcludedNodes,ExcludedEdges);

            if (!SpurPath.bFound)
            {
                continue;
            }

            //  유지한 앞부분 + 새 뒷부분 연결
            FRoutePathResult Candidate;
            Candidate.NodeIndices = RootNodes;
            Candidate.EdgeIndices = RootEdges;

            // SpurPath의 첫 노드는 이미 RootNodes에 있는 분기점
            // 중복을 막기 위해 1번부터 추가
            for (int32 i = 1; i < SpurPath.NodeIndices.Num(); ++i)
            {
                Candidate.NodeIndices.Add(SpurPath.NodeIndices[i]);
            }

            Candidate.EdgeIndices.Append(SpurPath.EdgeIndices);

            //  전체 경로의 시간 계산
            // 현재 A*와 동일한 거리 / 속도 계산식을 사용
            Candidate.TotalTime = 0.0f;

            for (int32 EdgeIndex : Candidate.EdgeIndices)
            {
                const FRouteEdge& Edge =
                    GraphManager.Edges[EdgeIndex];

                const double Distance = FVector::Dist(GraphManager.Nodes[Edge.FromNodeIndex].WorldLocation,GraphManager.Nodes[Edge.ToNodeIndex].WorldLocation);

                Candidate.TotalTime += static_cast<float>(Distance / Edge.MoveSpeed);
            }

            // 표시용 좌표 구성
            for (int32 NodeIndex : Candidate.NodeIndices)
            {
                Candidate.PathPoints.Add(
                    GraphManager.Nodes[NodeIndex].WorldLocation);
            }

            Candidate.bFound = true;

            // 이미 채택했거나 대기 중인 경로와 중복인지 검사
            bool bDuplicate = false;

            for (const FRoutePathResult& Accepted : AcceptedPaths)
            {
                if (Accepted.EdgeIndices == Candidate.EdgeIndices)
                {
                    bDuplicate = true;
                    break;
                }
            }

            if (!bDuplicate)
            {
                for (const FRoutePathResult& Pending : CandidatePaths)
                {
                    if (Pending.EdgeIndices == Candidate.EdgeIndices)
                    {
                        bDuplicate = true;
                        break;
                    }
                }
            }

            if (!bDuplicate)
            {
                CandidatePaths.Add(Candidate);
            }
        }

        // 더 이상 대체 경로가 없으면 종료
        if (CandidatePaths.Num() == 0)
        {
            break;
        }

        // 대기 중인 모든 후보 중 최소 시간 경로 선택
        int32 BestCandidateIndex = 0;

        for (int32 i = 1; i < CandidatePaths.Num(); ++i)
        {
            if (CandidatePaths[i].TotalTime <
                CandidatePaths[BestCandidateIndex].TotalTime)
            {
                BestCandidateIndex = i;
            }
        }

        AcceptedPaths.Add(CandidatePaths[BestCandidateIndex]);
        CandidatePaths.RemoveAt(BestCandidateIndex);
    }


    return AcceptedPaths;
}
