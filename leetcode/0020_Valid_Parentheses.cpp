#include <stack>
#include <string>
#include <unordered_map>
using namespace std;

/*
 * 20. Valid Parentheses
 *
 * Given a string s containing just the characters '(', ')', '{', '}', '[' and
 * ']', determine if the input string is valid.
 *
 * An input string is valid if:
 *
 * Open brackets must be closed by the same type of brackets.
 * Open brackets must be closed in the correct order.
 * Every close bracket has a corresponding open bracket of the same type.
 *
 * */

bool isValid(string s) {
  stack<char> stk;
  unordered_map<char, char> brackets = {{')', '('}, {'}', '{'}, {']', '['}};
  for (char c : s) {
    if (brackets.count(c)) {
      if (!stk.empty() && stk.top() == brackets[c]) {
        stk.pop();
      } else {
        return false;
      }
    } else {
      stk.push(c);
    }
  }
  return stk.empty();
}
