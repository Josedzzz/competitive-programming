#include <string>
#include <unordered_map>
using namespace std;

/*
 * 13. Roman to Integer
 *
 * Roman numerals are represented by seven different symbols: I, V, X, L, C, D
 * and M.
 *
 * Symbol       Value
 * I             1
 * V             5
 * X             10
 * L             50
 * C             100
 * D             500
 * M             1000
 *
 * For example, 2 is written as II in Roman numeral, just two ones added
 * together. 12 is written as XII, which is simply X + II. The number 27 is
 * written as XXVII,
 * which is XX + V + II.
 * */

int romanToInt(string s) {
  unordered_map<char, int> romanMap = {{'I', 1},   {'V', 5},   {'X', 10},
                                       {'L', 50},  {'C', 100}, {'D', 500},
                                       {'M', 1000}};

  int total = 0;

  for (int i = 0; i < s.size(); i++) {
    if (s.size() - 1 && romanMap[s[i]] < romanMap[s[i + 1]]) {
      total -= romanMap[s[i]];
    } else {
      total += romanMap[s[i]];
    }
  }
  return total;
}
