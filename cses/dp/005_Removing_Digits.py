import sys


def main():
    data = sys.stdin.read().split()
    n = int(data[0])

    dp = [0] * (n + 1)
    dp[0] = 0

    for i in range(1, n + 1):
        digits = {int(c) for c in str(i)} - {0}
        dp[i] = min(dp[i - d] for d in digits) + 1

    print(dp[n])


if __name__ == "__main__":
    main()
