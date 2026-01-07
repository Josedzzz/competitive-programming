#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

/* Longest Increasing Subsequence (LIS) in an array
 * of n elements. This is a maximum-length sequence of array elements that goes
 * from left to right, and each element in the sequence is larger than the
 * previous element.
 * */

int lisdp(vector<int> &array) {
  int n = array.size();
  if (n == 0)
    return 0;

  vector<int> length(n, 1);

  for (int k = 0; k < n; k++) {
    for (int i = 0; i < k; i++) {
      if (array[i] < array[k]) {
        length[k] = max(length[k], length[i] + 1);
      }
    }
  }

  int answer = 0;
  for (int i = 0; i < n; i++) {
    answer = max(answer, length[i]);
  }
  return answer;
}

int main() {
  vector<int> arr1 = {6, 2, 5, 1, 7, 4, 8, 3};
  vector<int> arr2 = {3, 10, 2, 1, 20};
  vector<int> arr3 = {50, 3, 10, 7, 40, 80};
  vector<int> arr4 = {10, 9, 2, 5, 3, 7, 101, 18};

  cout << "Array: ";
  for (int num : arr1)
    cout << num << " ";
  cout << "\nLIS length: " << lisdp(arr1) << endl;

  cout << "\nArray: ";
  for (int num : arr2)
    cout << num << " ";
  cout << "\nLIS length: " << lisdp(arr2) << endl;

  cout << "\nArray: ";
  for (int num : arr3)
    cout << num << " ";
  cout << "\nLIS length: " << lisdp(arr3) << endl;

  cout << "\nArray: ";
  for (int num : arr4)
    cout << num << " ";
  cout << "\nLIS length: " << lisdp(arr4) << endl;

  return 0;
}
