t = int(input())
numbers = list(map(int, input().split()))

max_num = max(numbers)
aliquot_sums = [0] * (max_num + 1)

for i in range(1, max_num + 1):
    j = i * 2
    while j <= max_num:
        aliquot_sums[j] += i
        j += i

for num in numbers:
    s = aliquot_sums[num]
    if s > num:
        print("abundant")
    elif s < num:
        print("deficient")
    else:
        print("perfect")
