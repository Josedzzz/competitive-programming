"""
Your task is to calculate the number of bit strings of length n.
For example, if n=3, the correct answer is 8, because the possible bit strings are 000, 001, 010, 011, 100, 101, 110, and 111.

Input
The only input line has an integer n.

Output
Print the result modulo 10^9+7.

Example
Input:
3

Output:
8
"""

n = int(input())
MOD = 10**9 + 7
print(pow(2, n, MOD))
