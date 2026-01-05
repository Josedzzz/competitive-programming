#include <iostream>
#include <vector>
using namespace std;

/* A backtracking algorithm begins with an empty solution and extends the
 * solution step by step. The search recursively goes through all different ways
 * how a solution can be constructed. As an example, consider the problem of
 * calculating the number of ways n queens can be placed on an n × n chessboard
 * so that no two queens attack each other.
 * */

void search(int y, int n, int &count, vector<int> &column, vector<int> &diag1,
            vector<int> &diag2) {
  if (y == n) {
    count++;
    return;
  }
  for (int x = 0; x < n; x++) {
    if (column[x] || diag1[x + y] || diag2[x - y + n - 1])
      continue;
    column[x] = diag1[x + y] = diag2[x - y + n - 1] = 1;
    search(y + 1, n, count, column, diag1, diag2);
    column[x] = diag1[x + y] = diag2[x - y + n - 1] = 0;
  }
}

int main() {
  int n;
  cout << "Enter board size (n): ";
  cin >> n;

  int count = 0;
  vector<int> column(n, 0);
  vector<int> diag1(2 * n - 1, 0);
  vector<int> diag2(2 * n - 1, 0);

  search(0, n, count, column, diag1, diag2);

  cout << "Number of solutions: " << count << endl;
  return 0;
}
