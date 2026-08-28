#include <iostream>
#include <set>
using namespace std;

int main() {
  int n;
  cin >> n;
  int v;
  set<int> s;
  for (int i = 0; i < n; i++) {
    cin >> v;
    s.insert(v);
  }
  cout << s.size() << endl;
  return 0;
}
