def can_reach(n):
    if n == 1:
        return True
    if n < 1:
        return False
    result = False
    if n % 10 == 0:
        result = result or can_reach(n // 10)
    if n % 20 == 0:
        result = result or can_reach(n // 20)
    return result

t = int(input())
for _ in range(t):
    n = int(input())
    if can_reach(n):
        print("YES")
    else:
        print("NO")

