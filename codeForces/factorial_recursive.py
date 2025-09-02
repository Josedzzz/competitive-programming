n = int(input())

def recursive(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * recursive(n - 1)

print(recursive(n))
