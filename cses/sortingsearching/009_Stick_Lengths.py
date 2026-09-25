import sys


def main():
    data = sys.stdin.read().split()
    n = int(data[0])
    arr = sorted(map(int, data[1 : 1 + n]))

    media = arr[n // 2]
    cost = 0

    for i in range(n):
        if arr[i] != media:
            cost += abs(media - arr[i])

    print(cost)


if __name__ == "__main__":
    main()
