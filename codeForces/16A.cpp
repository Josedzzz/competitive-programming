#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<string> flag(n);
  bool possible = true;

  for (int i = 0; i < n; i++) {
    cin >> flag[i];

    for (int j = 1; j < m; j++) {
      if (flag[i][j] != flag[i][0]) {
        possible = false;
      }
    }

    if (i > 0) {
      if (flag[i][0] == flag[i - 1][0]) {
        possible = false;
      }
    }
  }

  if (possible) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
