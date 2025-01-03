#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

bool canDistribute(const vector<int> &items, int scouts, int maxWeight) {
  int currentScout = 1;
  int currentWeight = 0;
  for (int item : items) {
    if (item > maxWeight)
      return false;
    if (currentWeight + item <= maxWeight) {
      currentWeight += item;
    } else {
      currentScout++;
      currentWeight = item;
      if (currentScout > scouts) {
        return false;
      }
    }
  }
  return true;
}

int findMaxWeight(int scouts, vector<int> &items) {
  sort(items.begin(), items.end(), greater<int>());
  int left = *max_element(items.begin(), items.end());
  int right = accumulate(items.begin(), items.end(), 0);
  int result = right;
  while (left <= right) {
    int mid = left + (right - left) / 2;
    if (canDistribute(items, scouts, mid)) {
      result = mid;
      right = mid - 1;
    } else {
      left = mid + 1;
    }
  }
  return result;
}

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> items(N);
  for (int i = 0; i < N; ++i) {
    cin >> items[i];
  }

  cout << findMaxWeight(M, items) << endl;
  return 0;
}
