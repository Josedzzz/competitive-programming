#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  int count = 0;
  int cur = 50;

  while (cin >> s) {
    char dir = s[0];
    int amt = stoi(s.substr(1));

    for (int i = 0; i < amt; i++) {
      if (dir == 'L') {
        cur = (cur - 1 + 100) % 100;
      } else {
        cur = (cur + 1) % 100;
      }

      if (cur == 0) {
        count++;
      }
    }
  }

  cout << count << endl;
  return 0;
}
