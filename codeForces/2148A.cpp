#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t > 0) {
    int x, n;
    cin >> x >> n;
    if (n % 2 == 0) {
      cout << 0 << endl;
    } else {
      cout << x << endl;
    }
    t--;
  }

  return 0;
}
