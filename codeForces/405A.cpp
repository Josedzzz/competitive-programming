#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> list(n);
  for (int i = 0; i < list.size(); i++) {
    cin >> list[i];
  }

  sort(list.begin(), list.end());

  for (int i = 0; i < list.size(); i++) {
    cout << list[i] << " ";
  }
  cout << "\n";

  return 0;
}
