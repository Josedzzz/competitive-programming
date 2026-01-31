#include <iostream>
#include <string>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    string s;
    cin >> s;
    for (int i = 1; i < n; i++) {
      string next;
      cin >> next;

      string front = next + s;
      string back = s + next;

      if (front < back) {
        s = front;
      } else {
        s = back;
      }
    }

    cout << s << "\n";
  }

  return 0;
}
