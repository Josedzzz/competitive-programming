#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> a(n);
    int max_val = 0;

    for (int i = 0; i < n; i++) {
      cin >> a[i];
      max_val = max(max_val, a[i]);
    }

    cout << max_val << endl;
  }

  return 0;
}
