from typing import List

def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
    result = []
    i = 0
    j = 0
    while i < m and j < n:
        if nums1[i] < nums2[j]:
            result.append(nums1[i])
            i += 1
        else:
            result.append(nums2[j])
            j += 1

    while i < m:
        result.append(nums1[i])
        i += 1

    while j < n:
        result.append(nums2[j])
        j += 1
    
    for k in range(m + n):
        nums1[k] = result[k]
