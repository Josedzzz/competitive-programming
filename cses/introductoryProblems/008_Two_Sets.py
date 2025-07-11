"""
Your task is to divide the numbers 1,2,...,n into two sets of equal sum.

Input
The only input line contains an integer n.

Output
Print "YES", if the division is possible, and "NO" otherwise.
After this, if the division is possible, print an example of how to create the sets. First, print the number of elements in the first set followed by the elements themselves in a separate line, and then, print the second set in a similar way.

Example 1
Input:
7

Output:
YES
4
1 2 4 7
3
3 5 6

Example 2
Input:
6

Output:
NO
"""

n = int(input())
totalSum = n * (n + 1) // 2

if totalSum % 2 != 0:
    print("NO")
else:
    print("YES")
    target = totalSum // 2
    list1 = []
    list2 = []
    for i in range(n, 0, -1):
        if i <= target:
            list1.append(i)
            target -= i
        else:
            list2.append(i)

    print(len(list1))
    print(" ".join(map(str, list1)))
    print(len(list2))
    print(" ".join(map(str, list2)))
