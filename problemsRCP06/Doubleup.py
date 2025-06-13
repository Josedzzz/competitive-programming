N = int(input())
nums = list(map(int, input().split(" ")))

while len(nums) > 1:
    move = False
    for i in range(len(nums) - 1):
        if nums[i] == nums[i + 1]:
            nums[i + 1] = nums[i] + nums[i]
            nums.pop(i)
            move = True
            break

    if move == False:
        min = nums[0]
        for i in range(len(nums)):
            if (nums[i] < min):
                min = nums[i]
        nums.remove(min)

print(nums[0])
