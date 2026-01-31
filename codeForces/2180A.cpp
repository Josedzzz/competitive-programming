#include <iostream>
#include <numeric>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long l, a, b;
    cin >> l >> a >> b;

    long long g = gcd(b, l);

    // The smallest reachable value in this sequence is a % g.
    // Every reachable value looks like (a % g) + (some_multiplier * g).
    // We want the largest such value < l.

    long long start_offset = a % g;

    // Calculate how many steps of g we can take from start_offset
    // without hitting or exceeding l.
    long long max_prize = start_offset + ((l - 1 - start_offset) / g) * g;

    cout << max_prize << "\n";
  }

  return 0;
}
