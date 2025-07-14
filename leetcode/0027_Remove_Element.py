from typing import List

def removeElement(self, nums: List[int], val: int) -> int:
    if len(nums) == 0:
        return 0
    i = 0
    for j in range(len(nums)):
        if nums[j] != val:
            nums[i] = nums[j]
            i += 1
    return i



