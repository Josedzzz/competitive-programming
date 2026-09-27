import sys


def main():
    data = sys.stdin.read().split()
    n = int(data[0])
    arr = list(map(int, data[1 : n + 1]))

    last_seen = {}
    left = 0
    best = 0

    for right in range(n):
        v = arr[right]
        if v in last_seen and last_seen[v] >= left:
            left = last_seen[v] + 1
        last_seen[v] = right
        best = max(best, right - left + 1)

    print(best)


if __name__ == "__main__":
    main()
