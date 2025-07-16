import random

class RandomizedSet:

    def __init__(self):
        self.num_to_index = {}
        self.nums = []

    def insert(self, val: int) -> bool:
        if val in self.num_to_index:
            return False
        self.nums.append(val)
        self.num_to_index[val] = len(self.nums) - 1
        return True

    def remove(self, val: int) -> bool:
        if val not in self.num_to_index:
            return False
        index = self.num_to_index[val]
        last_val = self.nums[-1]

        # Swap with last element
        self.nums[index] = last_val
        self.num_to_index[last_val] = index

        # Remove last
        self.nums.pop()
        del self.num_to_index[val]
        return True

    def getRandom(self) -> int:
        return random.choice(self.nums)



