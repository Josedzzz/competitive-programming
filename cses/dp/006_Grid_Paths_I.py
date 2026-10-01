import sys

MOD = 10**9 + 7


def main():
    data = sys.stdin.read().split()
    n = int(data[0])
    grid = data[1 : 1 + n]

    dp = [[0] * n for _ in range(n)]
    dp[0][0] = 1 if grid[0][0] == "." else 0

    for r in range(n):
        for c in range(n):
            if r == 0 and c == 0:
                continue
            if grid[r][c] == "*":
                dp[r][c] = 0
                continue
            total = 0
            if r > 0:
                total += dp[r - 1][c]
            if c > 0:
                total += dp[r][c - 1]
            dp[r][c] = total % MOD

    print(dp[n - 1][n - 1])


if __name__ == "__main__":
    main()
