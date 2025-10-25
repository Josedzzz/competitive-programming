n = int(input())

count = {}
for _ in range(n):
    word = str(input())
    if word in count:
        count[word] += 1
    else:
        count[word] = 1

print(len(count))
