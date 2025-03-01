#include <iostream>
#include <vector>
using namespace std;

/* Missing Number
 *
 * You are given all numbers between 1,2,...,n except one. Your task is to
 * find the missing number.
 *
 * Input
 * The first input line contains an integer n.
 * The second line contains n-1 numbers. Each number is distinct and between 1
 * and n (inclusive).
 *
 * Output
 * Print the missing number.
 *
 * Constraints
 * 2 <= n <= 2 * 10 ^ 5
 * */

int findMissingNumber(int n, const vector<int> &nums) {
  long long expectedSum = (long long)n * (n + 1) / 2;
  long long actualSum = 0;
  for (int num : nums) {
    actualSum += num;
  }
  return expectedSum - actualSum;
}

int main() {
  int n;
  cin >> n;
  vector<int> nums(n - 1);
  for (int i = 0; i < n - 1; i++) {
    cin >> nums[i];
  }
  int missing = findMissingNumber(n, nums);
  cout << missing << endl;
  return 0;
}
