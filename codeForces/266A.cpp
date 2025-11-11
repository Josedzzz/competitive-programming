#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int index = 1;
  int count = 0;
  while (index < s.size()) {
    if (s[index - 1] == s[index]) {
      s.erase(index - 1, 1);
      count++;
    } else {
      index++;
    }
  }
  cout << count << endl;

  return 0;
}
