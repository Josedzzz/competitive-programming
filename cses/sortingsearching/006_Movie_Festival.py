import sys

def main():
    data = sys.stdin.read().split()
    n = int(data[0])

    movies = []
    idx = 1
    for _ in range(n):
        a = int(data[idx])
        b = int(data[idx + 1])
        idx += 2
        movies.append((b, a))  # sort by end time

    movies.sort()

    count = 0
    last_end = -1
    for end, start in movies:
        if start >= last_end:
            count += 1
            last_end = end

    print(count)


if __name__ == "__main__":
    main()
