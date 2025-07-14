from typing import List

def removeDuplicates(self, nums: List[int]) -> int:
    if len(nums) == 0:
        return 0
    i = 0
    count = 0
    for j in range(1, len(nums)):
        if nums[j] == nums[i]:
            count += 1
        else:
            count = 0
        if nums[j] != nums[i] or count < 2 and i < len(nums) - 1:
            i += 1
            nums[i] = nums[j]
    return i + 1



