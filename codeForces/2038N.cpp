#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t > 0) {
    string s;
    cin >> s;
    int a = s[0];
    int b = s[2];

    if (a < b) {
      s[1] = '<';
    } else if (a > b) {
      s[1] = '>';
    } else {
      s[1] = '=';
    }

    cout << s << endl;

    t--;
  }

  return 0;
}
