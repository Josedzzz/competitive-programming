import sys

MOD = 10**9 + 7


def main():
    data = sys.stdin.buffer.read().split()
    n, x = int(data[0]), int(data[1])
    coins = sorted(map(int, data[2 : 2 + n]))
    mx = coins[-1]

    dp = [0] * (x + 1)
    dp[0] = 1

    # Small i: some coins are too big, so keep the check
    for i in range(1, min(x, mx - 1) + 1):
        t = 0
        for c in coins:
            if c > i:
                break
            t += dp[i - c]
        dp[i] = t % MOD

    # i >= max coin: every coin fits, no branch needed
    for i in range(mx, x + 1):
        t = 0
        for c in coins:
            t += dp[i - c]
        dp[i] = t % MOD

    print(dp[x])


main()
