#include <algorithm>
#include <string>
using namespace std;

/* 67. Add Binary
 *
 * Given two binary strings a and b, return their sum as a binary string.
 * */

string addBinary(string a, string b) {
  string res = "";
  int c = 0, i = a.size() - 1, j = b.size() - 1;
  while (i >= 0 || j >= 0 || c == 1) {
    if (i >= 0) {
      c += a[i] - '0';
      i--;
    }
    if (j >= 0) {
      c += b[j] - '0';
      j--;
    }
    res += c % 2 + '0';
    c /= 2;
  }
  reverse(res.begin(), res.end());
  return res;
}
