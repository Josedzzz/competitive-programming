n = int(input())
numbers = list(map(int, input().split()))

if numbers == numbers[::-1]:
    print("YES")
else:
    print("NO")
