#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> nList(n);
  for (int i = 0; i < n; i++) {
    cin >> nList[i];
  }

  sort(nList.begin(), nList.end());
  int i = 0, j = n - 1, count = 0;
  while (i <= j) {
    if (i == j) {
      i++;
      count++;
    } else if (nList[i] + nList[j] <= x) {
      i++;
      j--;
      count++;
    } else {
      j--;
      count++;
    }
  }

  cout << count << endl;
  return 0;
}
