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

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    int safe_count = 0;
    int current_max = 0;

    for (int i = 0; i < n; i++) {
      if (a[i] >= current_max) {
        safe_count++;
        current_max = a[i];
      }
    }

    cout << n - safe_count << endl;
  }

  return 0;
}
