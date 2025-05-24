#include <climits>
#include <vector>
using namespace std;

/* 209.Minimum Size Subarray Sum
 * Given an array of positive integers nums and a positive integer target,
 * return the minimal length of a whose sum is greater than or equal to target.
 * If there is no such subarray, return 0 instead.
 * */

int minSubArrayLen(int target, vector<int> &nums) {
  int n = nums.size();
  int i = 0, sum = 0, ans = INT_MAX;
  for (int j = 0; j < n; j++) {
    sum += nums[j];
    while (sum >= target) {
      ans = min(ans, j - i + 1);
      sum -= nums[i++];
    }
  }
  return (ans == INT_MAX) ? 0 : ans;
}
