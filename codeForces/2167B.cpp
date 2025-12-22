#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  int q;
  cin >> q;

  while (q > 0) {
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if (s == t) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }

    q--;
  }
  return 0;
}
