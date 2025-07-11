"""
Your task is to count for k=1,2,...,n the number of ways two knights can be placed on a k*k chessboard so that they do not attack each other.

Input
The only input line contains an integer n.

Output
Print n integers: the results.

Example

Input:
8

Output:

0
6
28
96
252
550
1056
1848
"""

n = int(input())
for k in range(1, n + 1):
    totalPositions = k * k * (k * k - 1) // 2
    if k > 2:
        attackingPositions = 4 * (k - 1) * (k - 2)
    else:
        attackingPositions = 0
    print(totalPositions - attackingPositions)

