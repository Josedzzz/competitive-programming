#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int anton = 0;
  int danik = 0;
  for (char c : s) {
    if (c == 'A') {
      anton++;
    } else if (c == 'D') {
      danik++;
    }
  }
  if (anton == danik) {
    cout << "Friendship" << endl;
  } else if (anton > danik) {
    cout << "Anton" << endl;
  } else {
    cout << "Danik" << endl;
  }
  return 0;
}
