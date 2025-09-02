n = int(input())

def recursive(n):
    if n == 0:
        return
    if n == 1:
        print(n)
    else:
        print(n, end=" ")
        recursive(n - 1)

recursive(n)
