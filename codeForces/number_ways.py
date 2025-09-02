def recursive(step, edge):
    if step == edge:
        return 1
    if step > edge:
        return 0
    return recursive(step + 1, edge) + recursive(step + 2, edge) + recursive(step + 3, edge)

s, e = map(int, input().split())
print(recursive(s, e))


