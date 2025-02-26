#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
  long i, j;
  while (cin >> i >> j) {
    long result = abs(i - j);
    cout << result << endl;
  }

  return 0;
}
