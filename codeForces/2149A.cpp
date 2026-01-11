#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> a(n);
    int neg_count = 0;
    int zero_count = 0;
    int pos_count = 0;

    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] == -1)
        neg_count++;
      else if (a[i] == 0)
        zero_count++;
      else
        pos_count++;
    }

    int operations = 0;
    operations += zero_count;
    if (neg_count % 2 == 1)
      operations += 2;

    cout << operations << endl;
  }

  return 0;
}
