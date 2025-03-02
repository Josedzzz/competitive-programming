#include <string>
using namespace std;

/* 1071. Greatest Common Divisor of Strings
 *
 * For two strings s and t, we say "t divides s" if and only if s = t + t + t +
 * ... + t + t (i.e., t is concatenated with itself one or more times).
 *
 * Given two strings str1 and str2, return the largest string x such that x
 * divides both str1 and str2.
 * */

int gcd(int a, int b) {
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

string gcdOfStrings(string str1, string str2) {
  if (str1 + str2 != str2 + str1) {
    return "";
  }
  int gcdLength = gcd(str1.size(), str2.size());
  return str1.substr(0, gcdLength);
}
