#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  int n;
  while (t > 0) {
    cin >> n;
    int r = n % 3;
    int a = (r == 0) ? 0 : (3 - r);
    cout << a << endl;

    t--;
  }
  return 0;
}
