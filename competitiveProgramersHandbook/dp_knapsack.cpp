#include <iostream>
#include <vector>
using namespace std;

/* In this section, we focus on the following problem: Given a list of weights
 * [w1,w2,...,wn], determine all sums that can be constructed using the weights.
 * For example, if the weights are [1,3,3,5], the following sums are possible:
 * */

// Solution 1: 2D DP
vector<bool> possible_sums_2d(vector<int> &weights) {
  int n = weights.size();
  int W = 0;
  for (int w : weights)
    W += w;

  vector<vector<bool>> possible(W + 1, vector<bool>(n + 1, false));

  possible[0][0] = true;

  for (int k = 1; k <= n; k++) {
    for (int x = 0; x <= W; x++) {
      if (x - weights[k - 1] >= 0) {
        possible[x][k] = possible[x][k] || possible[x - weights[k - 1]][k - 1];
      }
      possible[x][k] = possible[x][k] || possible[x][k - 1];
    }
  }

  vector<bool> result(W + 1);
  for (int x = 0; x <= W; x++) {
    result[x] = possible[x][n];
  }
  return result;
}

// Solution 2: 1D DP
vector<bool> possible_sums_1d(vector<int> &weights) {
  int n = weights.size();
  int W = 0;
  for (int w : weights)
    W += w;

  vector<bool> possible(W + 1, false);
  possible[0] = true;

  for (int k = 1; k <= n; k++) {
    for (int x = W; x >= 0; x--) {
      if (possible[x]) {
        possible[x + weights[k - 1]] = true;
      }
    }
  }

  return possible;
}

int main() {
  vector<int> weights = {1, 3, 3, 5};

  cout << "Weights: ";
  for (int w : weights)
    cout << w << " ";
  cout << endl;

  cout << "\n2D DP solution:" << endl;
  vector<bool> result_2d = possible_sums_2d(weights);
  for (int x = 0; x < result_2d.size(); x++) {
    if (result_2d[x])
      cout << x << " ";
  }
  cout << endl;

  cout << "\n1D DP solution:" << endl;
  vector<bool> result_1d = possible_sums_1d(weights);
  for (int x = 0; x < result_1d.size(); x++) {
    if (result_1d[x])
      cout << x << " ";
  }
  cout << endl;

  return 0;
}
