#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int awake_count = 0;
    int forced_until = -1; // The index until which we are forced to stay awake

    for (int i = 0; i < n; i++) {
      if (s[i] == '1') {
        awake_count++;
        forced_until = max(forced_until, i + k);
      } else if (i <= forced_until) {
        awake_count++;
      }
    }

    cout << n - awake_count << "\n";
  }

  return 0;
}
