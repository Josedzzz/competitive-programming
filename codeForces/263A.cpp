#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<vector<int>> matrix(5, vector<int>(5));
  int ii;
  int ij;

  // read the input
  for (int i = 0; i < matrix.size(); i++) {
    for (int j = 0; j < matrix[i].size(); j++) {
      cin >> matrix[i][j];
      if (matrix[i][j] == 1) {
        ii = i;
        ij = j;
      }
    }
  }

  // center on 2 - 2
  int moves = abs(ii - 2) + abs(ij - 2);
  cout << moves << endl;

  return 0;
}
