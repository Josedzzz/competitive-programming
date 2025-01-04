#include <iostream>
#include <vector>

using namespace std;

// Here we will find examples of different time complexity of some codes.
// Each code will have its function with its respective notation

// Time complexity: O(n)
void printList(const vector<int> &list) {
  for (int i = 0; i < list.size(); ++i) {
    cout << list[i] << "\n";
  }
}

// Time complexity: O(n^2)
void printPairs(const vector<int> &list) {
  for (int i = 0; i < list.size(); ++i) {
    for (int j = 0; j < list.size(); ++j) {
      cout << "(" << list[i] << ", " << list[j] << ")" << "\n";
    }
  }
}

// Time complexity: O(n^2) because phase 2 dominates
void printPhases(const vector<int> &list) {
  // Phase 1: O(n)
  for (int i = 0; i < list.size(); ++i) {
    cout << list[i] << "\n";
  }

  // Phase 2: O(n^2)
  for (int i = 0; i < list.size(); ++i) {
    for (int j = 0; j < list.size(); ++j) {
      cout << "(" << list[i] << ", " << list[j] << ")" << "\n";
    }
  }

  // Phase 3: O(n)
  for (int i = 0; i < list.size(); ++i) {
    cout << list[i] << "\n";
  }
}
