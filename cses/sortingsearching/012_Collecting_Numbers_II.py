import sys


def main():
    data = sys.stdin.read().split()
    idx = 0
    n = int(data[idx])
    idx += 1
    m = int(data[idx])
    idx += 1
    arr = list(map(int, data[idx : idx + n]))
    idx += n

    pos = [0] * (n + 1)
    for i, v in enumerate(arr):
        pos[v] = i

    def is_break(v):
        if v < 2 or v > n:
            return 0
        return 1 if pos[v] < pos[v - 1] else 0

    breaks = sum(is_break(v) for v in range(2, n + 1))

    out = []
    for _ in range(m):
        a = int(data[idx])
        idx += 1
        b = int(data[idx])
        idx += 1
        p, q = a - 1, b - 1

        x, y = arr[p], arr[q]
        affected = {x, x + 1, y, y + 1}

        for v in affected:
            breaks -= is_break(v)

        pos[x], pos[y] = q, p
        arr[p], arr[q] = y, x

        for v in affected:
            breaks += is_break(v)

        out.append(str(1 + breaks))

    print("\n".join(out))


if __name__ == "__main__":
    main()
