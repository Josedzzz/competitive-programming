import sys


def main():
    data = sys.stdin.read().split()
    n = int(data[0])
    arr = list(map(int, data[1 : 1 + n]))

    pos = [0] * (n + 1)
    for i, v in enumerate(arr):
        pos[v] = i

    count = 1  # the first round always happens
    for v in range(2, n + 1):
        if pos[v] < pos[v - 1]:
            count += 1

    print(count)


if __name__ == "__main__":
    main()
