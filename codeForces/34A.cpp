#include <climits>
#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> heights(n);
  for (int i = 0; i < n; i++) {
    cin >> heights[i];
  }

  int minIndex = 0;
  int minDif = INT_MAX;

  for (int i = 0; i < n; i++) {
    if (i == n - 1) {
      int dif = abs(heights[i] - heights[0]);
      if (dif < minDif) {
        minIndex = i;
        minDif = dif;
      }
    } else {
      int dif = abs(heights[i] - heights[i + 1]);
      if (dif < minDif) {
        minIndex = i;
        minDif = dif;
      }
    }
  }

  if (minIndex == n - 1) {
    cout << minIndex + 1 << " " << 1 << "\n";
  } else {
    cout << minIndex + 1 << " " << minIndex + 2 << "\n";
  }

  return 0;
}
