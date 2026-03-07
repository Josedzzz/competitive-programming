#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> list(n);
  for (int i = 0; i < n; i++) {
    cin >> list[i];
  }

  int maxValue = list[0], maxIndex = 0;
  int minValue = list[0], minIndex = 0;

  for (int i = 0; i < n; i++) {
    if (list[i] > maxValue) {
      maxValue = list[i];
      maxIndex = i;
    }

    if (list[i] <= minValue) {
      minValue = list[i];
      minIndex = i;
    }
  }

  int movements = maxIndex + (n - 1 - minIndex);
  if (maxIndex > minIndex) {
    movements--;
  }

  cout << movements << endl;

  return 0;
}
