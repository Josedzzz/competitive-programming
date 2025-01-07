#include <unordered_map>
#include <vector>

using namespace std;

/*
 * 1. Two Sum
 *
 * Given an array of integers nums and an integer target, return indices of the
 * two numbers such that they add up to target.
 *
 * You may assume that each input would have exactly one solution, and you may
 * not use the same element twice.
 *
 * You can return the answer in any order.
 * */

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
