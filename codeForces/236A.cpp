#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  set<int> letters;

  for (char c : s) {
    letters.insert(c);
  }

  if (letters.size() % 2 == 0) {
    cout << "CHAT WITH HER!" << endl;
  } else {
    cout << "IGNORE HIM!" << endl;
  }

  return 0;
}
