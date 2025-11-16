#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    long long suffix_sum = 0;
    long long max_suffix = 0;

    for (int i = n - 1; i >= 0; i--) {
      suffix_sum += a[i];
      max_suffix = max(max_suffix, suffix_sum);
    }

    cout << max_suffix << endl;
  }

  return 0;
}
