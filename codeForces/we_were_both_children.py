t = int(input())
results = []

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    # Count frequency of hop lengths that are <= n
    freq = [0] * (n + 1)
    for num in a:
        if num <= n:
            freq[num] += 1

    # Initialize counter for each coordinate 1 to n
    cnt = [0] * (n + 1)

    # For each possible hop length i
    for i in range(1, n + 1):
        if freq[i] == 0:
            continue

        # Add freq[i] to all multiples of i
        j = i
        while j <= n:
            cnt[j] += freq[i]
            j += i

    max_caught = max(cnt) if n > 0 else 0
    results.append(max_caught)

for res in results:
    print(res)
