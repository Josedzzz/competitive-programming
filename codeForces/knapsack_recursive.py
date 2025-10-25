n, w = map(int, input().split())
weights = []
values = []

for _ in range(n):
    wi, vi = map(int, input().split())
    weights.append(wi)
    values.append(vi)

def recursive(index, remaining_weight):
    if index == n or remaining_weight <= 0:
        return 0

    current_weight = weights[index]
    current_value = values[index]

    if current_weight > remaining_weight:
        return recursive(index + 1, remaining_weight)

    take_item = current_value + recursive(index + 1, remaining_weight - current_weight)
    skip_item = recursive(index + 1, remaining_weight)

    return max(take_item, skip_item)

print(recursive(0, w))
