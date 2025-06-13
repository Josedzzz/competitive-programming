from typing import List

def minCostClimbingStairs(self, cost: List[int]) -> int:
    n = len(cost)
    prev_prev = cost[0]
    prev = cost[1]
    for i in range(2, n):
        current = cost[i] + min(prev_prev, prev)
        prev_prev, prev = prev, current
    return min(prev_prev, prev)
