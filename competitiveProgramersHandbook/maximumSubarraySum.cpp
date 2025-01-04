#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

/*
 * This is an example in which the maximun subarray sum problem is solved using
 * 3 different algorithms. The problem is: Given an array of n numbers,
 * calculate the maximun subarray sum (the largest possible sum of a sequence of
 * consecutive values in the array)
 * */

// Algorithm 1. Time complexity: O(n^3)
int maxSubarraySum1(const vector<int> &list) {
  int best = 0;
  for (int i = 0; i < list.size(); i++) {
    for (int j = 0; j < list.size(); j++) {
      int sum = 0;
      for (int k = i; k <= j; k++) {
        sum += list[k];
      }
      best = max(best, sum);
    }
  }
  return best;
}

// Algorithm 2. Time complexity: O(n^2)
int maxSubarraySum2(const vector<int> &list) {
  int best = 0;
  for (int i = 0; i < list.size(); i++) {
    int sum = 0;
    for (int j = i; j < list.size(); j++) {
      sum += list[j];
      best = max(best, sum);
    }
  }
  return best;
}

// Algorithm 3. Time complexity: O(n)
int maxSubarraySum3(const vector<int> &list) {
  int best = 0, sum = 0;
  for (int i = 0; i < list.size(); i++) {
    sum = max(list[i], sum + list[i]);
    best = max(best, sum);
  }
  return best;
}

int main() {
  vector<int> nums = {-1, 2, 4, -3, 5, 2, -5, 2};
  cout << "Max Subarray Sum O(n^3): " << maxSubarraySum1(nums) << "\n";
  cout << "Max Subarray Sum O(n^2): " << maxSubarraySum2(nums) << "\n";
  cout << "Max Subarray Sum O(n): " << maxSubarraySum3(nums) << "\n";

  return 0;
}
