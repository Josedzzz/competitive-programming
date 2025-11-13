#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  int cu = 0;
  int cl = 0;

  for (char c : s) {
    if (isupper(c)) {
      cu++;
    } else {
      cl++;
    }
  }

  if (cl >= cu) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
  } else {
    transform(s.begin(), s.end(), s.begin(), ::toupper);
  }
  cout << s << endl;

  return 0;
}
