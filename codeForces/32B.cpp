#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;

  string result = "";
  int i = 0;

  while (i < s.length()) {
    if (s[i] == '.') {
      result += '0';
      i++;
    } else if (s[i] == '-' && s[i + 1] == '.') {
      result += '1';
      i += 2;
    } else if (s[i] == '-' && s[i + 1] == '-') {
      result += '2';
      i += 2;
    }
  }

  cout << result << endl;

  return 0;
}
