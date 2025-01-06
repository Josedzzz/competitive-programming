#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

// 1. Two Sum solution with a algorithm with O(n) time complexity
vector<int> twoSum(vector<int> &nums, int target) {
  unordered_map<int, int> numIndexMap; // Store {value, index}
  for (int i = 0; i < nums.size(); i++) {
    int complement = target - nums[i];
    if (numIndexMap.find(complement) != numIndexMap.end()) {
      return {numIndexMap[complement], i};
    }
    numIndexMap[nums[i]] = i;
  }
  return {};
}

int main() {
  vector<int> nums = {2, 7, 11, 15};
  int target = 9;

  vector<int> result = twoSum(nums, target);
  cout << "[" << result[0] << ", " << result[1] << "]\n";

  return 0;
}
