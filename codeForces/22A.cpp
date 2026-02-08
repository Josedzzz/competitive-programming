#include <iostream>
#include <set>
using namespace std;

int main() {
  int n;
  cin >> n;

  set<int> unique_numbers;
  for (int i = 0; i < n; i++) {
    int val;
    cin >> val;
    unique_numbers.insert(val);
  }

  if (unique_numbers.size() < 2) {
    cout << "NO" << endl;
  } else {
    auto it = unique_numbers.begin();
    it++;
    cout << *it << endl;
  }

  return 0;
}
