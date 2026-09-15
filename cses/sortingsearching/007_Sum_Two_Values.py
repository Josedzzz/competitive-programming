import sys

def main():
    data = sys.stdin.read().split()
    n = int(data[0])
    x = int(data[1])

    # (value, original 1-based index) pairs, so sortin
    arr = [(int(data[2 + i]), i + 1) for i in range(n)
]
    arr.sort()

    left, right = 0, n - 1
    while left < right:
        total = arr[left][0] + arr[right][0]
        if total == x:
            print(arr[left][1], arr[right][1])
            return
        elif total < x:
            left += 1
        else:
            right -= 1

    print("IMPOSSIBLE")


if __name__:
    main()


