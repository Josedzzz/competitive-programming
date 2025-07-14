from typing import List

class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        while k != 0:
            num = nums.pop()
            nums.insert(0, num)
            k -= 1

    def rotateOptimal(self, nums: List[int], k: int) -> None:
        n = len(nums)
        k = k % n
            # Helper to reverse a portion in-place
        def reverse(start, end):
            while start < end:
                nums[start], nums[end] = nums[end], nums[start]
                start += 1
                end -= 1

        # Step 1: Reverse the whole array
        reverse(0, n - 1)
        # Step 2: Reverse the first k elements
        reverse(0, k - 1)
        # Step 3: Reverse the remaining elements
        reverse(k, n - 1)


