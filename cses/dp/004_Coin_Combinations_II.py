import sys

MOD = 10**9 + 7


def main():
    data = sys.stdin.read().split()
    n, x = int(data[0]), int(data[1])
    coins = sorted(map(int, data[2 : 2 + n]))

    dp = [0] * (x + 1)
    dp[0] = 1

    for coin in coins:
        for i in range(coin, x + 1):
            dp[i] = (dp[i] + dp[i - coin]) % MOD

    print(dp[x])


if __name__ == "__main__":
    main()
