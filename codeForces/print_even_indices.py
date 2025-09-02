n = int(input())
numbers = list(map(int, input().split()))

def recursive(numbers, i):
    if i <= 0:
        print(numbers[0])
    else:
        print(numbers[i], end=" ")
        recursive(numbers, i - 2)

i = n - 1
if i % 2:
    recursive(numbers, i - 1)
else:
    recursive(numbers, i)

