#include <iostream>
#include <vector>
using namespace std;

/* Subarray sum
 *
 * As the first example, consider a problem where we are given an array of n
 * positive integers and a target sum x, and we want to find a subarray whose
 * sum is x or report that there is no such subarray
 * */
pair<int, int> find_subarray_sum(vector<int> &arr, int x) {
  int n = arr.size();
  int left = 0;
  int current_sum = 0;

  for (int right = 0; right < n; right++) {
    current_sum += arr[right];

    while (current_sum > x && left <= right) {
      current_sum -= arr[left];
      left++;
    }

    if (current_sum == x) {
      return {left, right}; // Found
    }
  }

  return {-1, -1}; // Not found
}

pair<int, int> two_sum_sorted(vector<int> &arr, int x) {
  int left = 0;
  int right = arr.size() - 1;

  while (left < right) {
    int current_sum = arr[left] + arr[right];

    if (current_sum == x) {
      return {left, right}; // Found
    } else if (current_sum < x) {
      left++;  // Need larger sum
    } else {   // current_sum > x
      right--; // Need smaller sum
    }
  }

  return {-1, -1}; // Not found
}

int main() {
  // Subarray sum
  vector<int> arr1 = {1, 3, 2, 5, 1, 1, 2, 3};
  int target1 = 8;

  auto result1 = find_subarray_sum(arr1, target1);
  if (result1.first != -1) {
    cout << "Subarray found from index " << result1.first << " to "
         << result1.second << endl;
  } else {
    cout << "No subarray found" << endl;
  }

  // 2sum: Sorted array
  vector<int> arr2 = {1, 4, 5, 6, 7, 9, 11};
  int target2 = 10;

  cout << "Sorted array: ";
  for (int num : arr2)
    cout << num << " ";
  cout << "\nTarget sum: " << target2 << endl;

  auto result2 = two_sum_sorted(arr2, target2);
  cout << result2.first << "-" << result2.second << endl;

  return 0;
}
