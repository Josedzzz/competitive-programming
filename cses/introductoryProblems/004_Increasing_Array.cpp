#include <iostream>
#include <vector>
using namespace std;

/* Increasing Array
 *
 * You are given an array of n integers. You want to modify the array so that it
 * is increasing, i.e., every element is at least as large as the previous
 * element. On each move, you may increase the value of any element by one. What
 * is the minimum number of moves required? Input The first input line contains
 * an integer n: the size of the array. Then, the second line contains n
 * integers x_1,x_2,\ldots,x_n: the contents of the array. Output Print the
 * minimum numbe rof moves. Constraints 1 \le n \le 2 \cdot 10^5 1 \le x_i \le
 * 10^9
 * */

long long minMoves(vector<int> &arr) {
  long long moves = 0;
  for (int i = 1; i < arr.size(); i++) {
    if (arr[i] < arr[i - 1]) {
      moves += arr[i - 1] - arr[i];
      arr[i] = arr[i - 1];
    }
  }
  return moves;
}

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  long long result = minMoves(arr);
  cout << result << endl;
  return 0;
}
