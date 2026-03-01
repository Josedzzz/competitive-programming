#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int n1, n2;
  int sum = 0;
  while (n--) {
    cin >> n1 >> n2;
    sum = n1 + n2;
    cout << sum << endl;
  }
  return 0;
}
