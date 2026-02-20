#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, d;
  cin >> n >> d;
  vector<int> heights(n);

  for (int i = 0; i < n; i++) {
    cin >> heights[i];
  }

  int count = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i != j) {
        int dif = abs(heights[i] - heights[j]);
        if (dif <= d) {
          count++;
        }
      }
    }
  }

  cout << count << endl;

  return 0;
}
