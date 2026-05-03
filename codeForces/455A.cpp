#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> freq(100001, 0);
  int maxNum;

  // read input and calculate frequency
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    freq[x]++;
    maxNum = max(maxNum, x);
  }

  // dp array
  vector<long long> dp(maxNum + 1, 0);

  // base cases
  dp[0] = 0;
  dp[1] = freq[1];

  for (int i = 2; i <= maxNum; i++) {
    dp[i] = max(dp[i - 1], dp[i - 2] + (long long)i * freq[i]);
  }

  cout << dp[maxNum] << endl;

  return 0;
}
