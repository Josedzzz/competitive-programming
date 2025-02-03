#include <string>
using namespace std;

/* 28. Find the Index of the First Occurrence String
 *
 * Given two strings needle and haystack, return the index of the first
 * occurrence of needle in haystack, or -1 if needle is not part of haystack.
 * */

int strStr(string haystack, string needle) {
  int n = haystack.size();
  int m = needle.size();

  if (m == 0)
    return 0;

  for (int i = 0; i <= n - m; i++) {
    if (haystack.substr(i, m) == needle) {
      return i; // Match found
    }
  }

  return -1;
}
