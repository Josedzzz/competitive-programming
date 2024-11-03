#include <iostream>
#include <ostream>

using namespace std;

void blankSpaces(const long &n, const long &p) {
  if (n % p == 0) {
    cout << 0 << endl;
  } else {
    long divider = p / 2;
    long halfValue = n / 2 - divider;
    long offset = (halfValue % p) * 2;
    cout << offset << endl;
  }
}

int main() {
  long num1, num2;
  cin >> num1 >> num2;
  blankSpaces(num1, num2);
}
