from typing import List

def findLucky(self, arr: List[int]) -> int:
    freq = {}
    for num in arr:
        if num in freq:
            freq[num] += 1
        else:
            freq[num] = 1
    result = -1
    for num in freq:
        if freq[num] == num:
            result = max(result, num)
    return result



