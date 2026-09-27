import sys

MOD = 10**9 + 7


def main():
    data = sys.stdin.read().split()
    n = int(data[0])

    dp = [0] * (n + 1)
    dp[0] = 1

    for i in range(1, n + 1):
        for die in range(1, 7):
            if i - die >= 0:
                dp[i] = (dp[i] + dp[i - die]) % MOD

    print(dp[n])


# 3
# dp =
# 0 0 0 0
# 1 0 0 0
#
# i = 1
# die = 1
# if 1 - 0 >= 0
# 1 1 0 0
#
# die = 2
# if 1 - 2 >= 0
#
# die = 3
# if 1 - 3 >= 0 ... same to die = 6
#
# i = 2
# die = 1
# if 2 - 1 >= 0
# 1 1 1 0
#
# die = 2
# if 2 - 2 >= 0
# 1 1 2 0 ... same to die = 6
#
# i = 3
# die = 1
# if 3 - 1 >= 0
# 1 1 2 2
#
# die = 2
# if 3 - 2 >= 0
# 1 1 2 3
#
# die = 3
# if 3 - 3 >= 0
# 1 1 2 4

if __name__ == "__main__":
    main()
