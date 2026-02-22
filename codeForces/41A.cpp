#include <iostream>
#include <string>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  if (s.size() != t.size()) {
    cout << "NO" << endl;
  } else {
    int i = 0;
    int j = t.size() - 1;
    bool flag = true;
    while (i < t.size()) {
      if (s[i] != t[j]) {
        flag = false;
        break;
      }
      i++;
      j--;
    }

    if (flag) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
