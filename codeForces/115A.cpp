#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> manager(n + 1);

  for (int i = 1; i <= n; i++) {
    cin >> manager[i];
  }

  int maxDepth = 0;

  for (int i = 1; i <= n; i++) {
    int depth = 0;
    int current = i;

    while (current != -1) {
      depth++;
      current = manager[current];
    }

    maxDepth = max(maxDepth, depth);
  }

  cout << maxDepth << endl;

  return 0;
}
