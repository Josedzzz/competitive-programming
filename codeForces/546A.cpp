#include <iostream>
using namespace std;

int main() {
  int k, n, w;
  cin >> k >> n >> w;
  int cost = 0;
  for (int i = 0; i < w; i++) {
    cost += k * (i + 1);
  }
  if (cost > n) {
    cout << cost - n << endl;
  } else {
    cout << 0 << endl;
  }
  return 0;
}
