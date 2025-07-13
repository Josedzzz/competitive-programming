"""
You have two coin piles containing a and b coins. On each move, you can either remove one coin from the left pile and two coins from the right pile, or two coins from the left pile and one coin from the right pile.
Your task is to efficiently find out if you can empty both the piles.

Input
The first input line has an integer t: the number of tests.
After this, there are t lines, each of which has two integers a and b: the numbers of coins in the piles.

Output
For each test, print "YES" if you can empty the piles and "NO" otherwise.

Example

Input:
3
2 1
2 2
3 3

Output:
YES
NO
YES
"""
import sys

t = int(sys.stdin.readline())
for _ in range(t):
    a, b = map(int, sys.stdin.readline().split())
    total = a + b
    if total % 3 == 0 and 2 * min(a, b) >= max(a, b):
        print("YES")
    else:
        print("NO")
