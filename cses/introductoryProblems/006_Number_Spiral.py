"""
A number spiral is an infinite grid whose upper-left square has number 1.
Your task is to find out the number in row y and column x.

Input
The first input line contains an integer t: the number of tests.
After this, there are t lines, each containing integers y and x.

Output
For each test, print the number in row y and column x.

Constraints
1 <= t <= 10^5
1 <= y,x <= 10^9

Example

Input:
3
2 3
1 1
4 2

Output:
8
1
15
"""

def numberSpiral(x, y):
    n = max(x, y)
    if n % 2  == 0:
        if y == n:
            return (n - 1) ** 2 + x
        else:
            return n ** 2 - (y - 1)
    else:
        if x == n:
            return (n - 1) ** 2 + y
        else:
            return n ** 2 - (x - 1)

t = int(input())
while t:
    x, y = map(int, input().split())
    print(numberSpiral(x, y))
    t = t - 1
