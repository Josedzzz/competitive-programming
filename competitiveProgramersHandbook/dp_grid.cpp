#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

/* Paths in a grid
 *
 * Our next problem is to find a path from the upper-left corner to the
 * lower-right corner of an n × n grid, such that we only move down and right.
 * Each square contains a positive integer, and the path should be constructed
 * so that the sum of the values along the path is as large as possible.
 * */

int max_path_sum(vector<vector<int>> &grid) {
  int n = grid.size();
  vector<vector<int>> sum(n, vector<int>(n, 0));

  // Initialize first cell
  sum[0][0] = grid[0][0];

  for (int y = 0; y < n; y++) {
    for (int x = 0; x < n; x++) {
      if (y == 0 && x == 0)
        continue; // Already set

      int from_left = (x > 0) ? sum[y][x - 1] : 0;
      int from_top = (y > 0) ? sum[y - 1][x] : 0;

      sum[y][x] = max(from_left, from_top) + grid[y][x];
    }
  }

  return sum[n - 1][n - 1];
}

int main() {
  vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  cout << "Maximum path sum: " << max_path_sum(grid) << endl;
  return 0;
}
