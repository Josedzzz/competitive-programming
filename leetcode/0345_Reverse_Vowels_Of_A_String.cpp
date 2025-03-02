#include <string>
#include <unordered_set>
using namespace std;

/* 345. Reverse Vowels of a String
 *
 * Given a string s, reverse only all the vowels in the string and return it.
 *
 * The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower
 * and upper cases, more than once.
 * */

string reverseVowels(string s) {
  // Set of vowels (both lowercase and uppercase)
  unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u',
                                'A', 'E', 'I', 'O', 'U'};

  int left = 0;
  int right = s.size() - 1;

  while (left < right) {
    while (left < right && vowels.find(s[left]) == vowels.end()) {
      left++;
    }
    while (left < right && vowels.find(s[right]) == vowels.end()) {
      right--;
    }
    if (left < right) {
      swap(s[left], s[right]);
      left++;
      right--;
    }
  }
  return s;
}
