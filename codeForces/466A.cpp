#include <algorithm>
#include <iostream>
using namespace std;

// n = number of rides
// m = the number of rides covered
// a = the price of a one ride ticket
// b = the price of an m ride ticket

int main() {
  int n, m, a, b;
  cin >> n >> m >> a >> b;

  // cost single ride tickets
  int cost1 = n * a;

  // cost multi ride tickets and remaining rides
  int cost2 = (n / m) * b + (n % m) * a;

  // cost buying an extra multi ride ticket for remaining rides
  int cost3 = ((n + m - 1) / m) * b;

  int result = min({cost1, cost2, cost3});
  cout << result << endl;

  return 0;
}
