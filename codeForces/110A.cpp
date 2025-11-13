#include <iostream>
using namespace std;

int main() {
  long long n;
  cin >> n;
  int count = 0;
  while (n > 9) {
    if (n % 10 == 7 || n % 10 == 4) {
      count++;
    }
    n /= 10;
  }
  if (n == 7 || n == 4) {
    count++;
  }
  if (count == 4 || count == 7) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
