#include <iostream>
#include <utility>
#include <vector>
using namespace std;

/* Sorting theory:
 *
 * Given an array that contain n elements,
 * your task is to sort the elements in increasing order
 * */

void bubbleSort(vector<int> &array) {
  int n = array.size();
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - 1; j++) {
      if (array[j] > array[j + 1]) {
        swap(array[j], array[j + 1]);
      }
    }
  }
}

void printArray(vector<int> &array) {
  for (int i = 0; i < array.size(); i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

int main() {
  vector<int> array;
  array.push_back(1);
  array.push_back(3);
  array.push_back(2);
  array.push_back(5);
  array.push_back(4);

  printArray(array);

  // bubbleSort(array);
  // Also we can do a better sort
  sort(array.begin(), array.end());

  printArray(array);

  return 0;
}
