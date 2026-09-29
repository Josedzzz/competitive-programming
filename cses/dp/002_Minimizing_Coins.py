import sys


def main():
    data = sys.stdin.read().split()
    n = int(data[0])
    x = int(data[1])
    coins = list(map(int, data[2 : 2 + n]))

    INF = x + 1
    dp = [INF] * (x + 1)
    dp[0] = 0

    for coin in coins:
        for i in range(coin, x + 1):
            v = dp[i - coin] + 1
            if v < dp[i]:
                dp[i] = v

    print(dp[x] if dp[x] != INF else -1)


if __name__ == "__main__":
    main()
