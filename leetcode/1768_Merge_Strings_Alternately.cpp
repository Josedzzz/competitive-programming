#include <string>
using namespace std;

/* 1768. Merge Strings Alternately
 *
 * You are given two strings word1 and word2. Merge the strings by adding
 * letters in alternating order, starting with word1. If a string is longer than
 * the other, append the additional letters onto the end of the merged string.
 *
 * Return the merged string.
 *
 * */

string mergeAlternately(string word1, string word2) {
  string result;
  int i = 0, j = 0;
  while (i < word1.size() && j < word2.size()) {
    result += word1[i++];
    result += word2[j++];
  }
  while (i < word1.size()) {
    result += word1[i++];
  }
  while (j < word2.size()) {
    result += word2[j++];
  }
  return result;
}
