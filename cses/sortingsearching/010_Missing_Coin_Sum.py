import sys


def main():
    data = sys.stdin.read().split()
    n = int(data[0])
    coins = sorted(map(int, data[1 : 1 + n]))

    reach = 0
    for coin in coins:
        if coin > reach + 1:
            break
        reach += coin

    print(reach + 1)


if __name__ == "__main__":
    main()

# n = 5
# coins = 1 2 2 7 9
# coin = 1, if = false, reach = 1
# coin = 2, if = false, reach = 3
# coin = 2, if = false, reach = 5
# coin = 7, if = true, break
# reach = 6
