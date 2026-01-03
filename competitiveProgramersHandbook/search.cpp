#include <vector>
using namespace std;

// Linear search: O(n)
int linearSearch(const vector<int> &array, int value) {
  for (int i = 0; i < array.size(); i++) {
    if (array[i] == value) {
      return i;
    }
  }
  return -1;
}

// If the array is sorted there are better methods

// Binary search: O(logn)
int binarySearch(const vector<int> &array, int value) {
  int n = array.size();
  int a = 0, b = n - 1;
  while (a <= b) {
    int k = (a + b) / 2;
    if (array[k] == value) {
      // x found at index k
      return k;
    }
    if (array[k] > value)
      b = k - 1;
    else
      a = k + 1;
  }
  return -1;
}
