#include <algorithm>
#include <iostream>
using namespace std;

int cycle_length(int n) {
  int count = 1;
  while (n > 1) {
    if (n % 2 != 0) {
      n = 3 * n + 1;
    } else {
      n = n / 2;
    }
    count++;
  }
  return count;
}

int getMaxCycleLength(int i, int j) {
  int maxLength = 0;
  if (i == j)
    return cycle_length(i);
  for (int n = min(i, j); n <= max(i, j); n++) {
    int currentLength = cycle_length(n);
    if (currentLength > maxLength)
      maxLength = currentLength;
  }
  return maxLength;
}

int main() {
  int i, j;
  while (cin >> i >> j) {
    int result = getMaxCycleLength(i, j);
    cout << i << " " << j << " " << result << endl;
  }

  return 0;
}
