#include <iostream>
#include <string>
using namespace std;

/* Repetitions
 *
 * You are given a DNA sequence: a string consisting of characters A, C, G, and
 * T. Your task is to find the longest repetition in the sequence. This is a
 * maximum-length substring containing only one type of character. Input The
 * only input line contains a string of n characters. Output Print one integer:
 * the length of the longest repetition. Constraints
 *
 * Constraints: 1 <= n <= 10^6
 *
 * Example
 *
 * Input: ATTCGGGA
 * Output: 3
 * */

int longestRepetition(const string &sequence) {
  int maxLength = 0;
  int currentLength = 0;
  int currentChar = '\0';
  for (char c : sequence) {
    if (c == currentChar) {
      currentLength++;
    } else {
      if (currentLength > maxLength) {
        maxLength = currentLength;
      }
      currentChar = c;
      currentLength = 1;
    }
  }
  if (currentLength > maxLength) {
    maxLength = currentLength;
  }
  return maxLength;
}

int main() {
  string sequence;
  cin >> sequence; // Read the input string
  int result = longestRepetition(sequence);
  cout << result << endl;
  return 0;
}
