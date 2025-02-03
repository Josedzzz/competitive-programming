#include <string>
using namespace std;

/* 58. Length of last word
 *
 * Given a string s consisting of words and spaces, return the length of the
 * last word in the string.
 *
 * A word is a maximal
 * substring
 * consisting of non-space characters only.
 * */

int lengthOfLastWord(string s) {
  int n = s.length();
  int length = 0;
  int i = n - 1;
  while (i >= 0 && s[i] == ' ') {
    i--;
  }
  while (i >= 0 && s[i] != ' ') {
    length++;
    i--;
  }
  return length;
}
