#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n = 0;
  vector<int> s;
  int num;

  while (n < 3) {
    cin >> num;
    s.push_back(num);
    n++;
  }

  sort(s.begin(), s.end());

  if (s[2] - s[0] >= 10) {
    cout << "check again" << endl;
  } else {
    cout << "final " << s[1] << endl;
  }

  return 0;
}
