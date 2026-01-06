#include <climits>
#include <iostream>
#include <vector>
using namespace std;

const int INF = INT_MAX;
vector<int> coins;
const int MAX_AMOUNT = 1000;

// Recursive DP
int solve_recursive(int x) {
  if (x < 0)
    return INF;
  if (x == 0)
    return 0;

  int best = INF;
  for (auto c : coins) {
    int subproblem = solve_recursive(x - c);
    if (subproblem != INF) {
      best = min(best, subproblem + 1);
    }
  }
  return best;
}

// Memoization (Top-down DP)
vector<int> memo(MAX_AMOUNT + 1, -1);

int solve_memo(int x) {
  if (x < 0)
    return INF;
  if (x == 0)
    return 0;

  // Check cache
  if (memo[x] != -1) {
    return memo[x];
  }

  int best = INF;
  for (int c : coins) {
    int sub = solve_memo(x - c);
    if (sub != INF) {
      best = min(best, sub + 1);
    }
  }

  memo[x] = best;
  return best;
}

// Tabulation (Bottom-up DP)
int solve_tabulation(int x) {
  vector<int> dp(x + 1, INF);
  dp[0] = 0;

  for (int i = 1; i <= x; i++) {
    for (auto c : coins) {
      if (i - c >= 0 && dp[i - c] != INF) {
        dp[i] = min(dp[i], dp[i - c] + 1);
      }
    }
  }

  return dp[x];
}

// ========== MAIN ==========
int main() {
  coins = {1, 3, 4};

  cout << "Coins: {1, 3, 4}" << endl;
  cout << "Amount\tRecursive\tMemoization\tTabulation" << endl;
  cout << "------\t---------\t-----------\t----------" << endl;

  for (int amount : {0, 1, 2, 3, 4, 5, 6, 7, 10}) {
    // Reset memo array for each amount
    fill(memo.begin(), memo.end(), -1);

    int rec = solve_recursive(amount);
    int mem = solve_memo(amount);
    int tab = solve_tabulation(amount);

    cout << amount << "\t";

    if (rec == INF)
      cout << "IMP";
    else
      cout << rec;

    cout << "\t\t";

    if (mem == INF)
      cout << "IMP";
    else
      cout << mem;

    cout << "\t\t";

    if (tab == INF)
      cout << "IMP";
    else
      cout << tab;

    cout << endl;
  }

  return 0;
}
