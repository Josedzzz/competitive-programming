n = int(input())

def recursive(n):
    if n == 0:
        return
    else:
        print("I love Recursion")
        recursive(n - 1)

recursive(n)
