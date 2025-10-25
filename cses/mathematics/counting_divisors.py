import math

def count_divisors(x):
    if x == 1:
        return 1
    divisors = 1
    temp = x
    sqrt_x = int(math.isqrt(x))
    count = 0
    while temp % 2 == 0:
        count += 1
        temp //= 2
    divisors *= (count + 1)
    # Check odd divisors
    for i in range(3, sqrt_x + 1, 2):
        count = 0
        while temp % i == 0:
            count += 1
            temp //= i
        divisors *= (count + 1)
    if temp > 1:
        divisors *= 2
    return divisors

n = int(input())
results = []

for _ in range(n):
    x = int(input())
    results.append(count_divisors(x))

# Output results
for result in results:
    print(result)
