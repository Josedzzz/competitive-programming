#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> d(n - 1);
  for (int i = 0; i < n - 1; i++) {
    cin >> d[i];
  }

  int a, b;
  cin >> a >> b;

  int years = 0;
  for (int i = a - 1; i < b - 1; i++) {
    years += d[i];
  }

  cout << years << endl;

  return 0;
}
