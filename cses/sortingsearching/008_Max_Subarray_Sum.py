import sys


def main():
    data = sys.stdin.read().split()
    n = int(data[0])
    arr = list(map(int, data[1:1 + n]))

    best = arr[0]
    current = arr[0]
    for i in range(1, n):
        current = max(arr[i], current + arr[i])
        best = max(best, current)

    print(best)


if __name__ == "__main__":
    main()
