#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<vector<char>> matrix(n, vector<char>(m));

  // Initialize boundaries to extreme values
  int min_row = n, max_row = -1;
  int min_col = m, max_col = -1;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> matrix[i][j];
      if (matrix[i][j] == '*') {
        if (i < min_row)
          min_row = i;
        if (i > max_row)
          max_row = i;
        if (j < min_col)
          min_col = j;
        if (j > max_col)
          max_col = j;
      }
    }
  }

  for (int i = min_row; i <= max_row; i++) {
    for (int j = min_col; j <= max_col; j++) {
      cout << matrix[i][j];
    }
    cout << "\n";
  }

  return 0;
}
