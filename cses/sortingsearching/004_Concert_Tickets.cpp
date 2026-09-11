#include <iostream>
#include <set>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;

  multiset<long long> tickets;
  for (int i = 0; i < n; i++) {
    long long price;
    cin >> price;
    tickets.insert(price);
  }

  for (int i = 0; i < m; i++) {
    long long budget;
    cin >> budget;

    auto it = tickets.upper_bound(budget);
    if (it == tickets.begin()) {
      cout << -1 << "\n";
    } else {
      --it;
      cout << *it << "\n";
      tickets.erase(it);
    }
  }

  return 0;
}
