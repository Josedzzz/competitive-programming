#include <algorithm>
#include <iostream>
#include <stack>
#include <string>
using namespace std;

string removePairs(string s) {
  stack<char> st;
  for (char c : s) {
    if (!st.empty() && st.top() == c) {
      st.pop();
    } else {
      st.push(c);
    }
  }
  string result;
  while (!st.empty()) {
    result += st.top();
    st.pop();
  }
  reverse(result.begin(), result.end());
  return result;
}

int main() {
  string s;
  cin >> s;
  string result = removePairs(s);
  cout << result << '\n';
  return 0;
}
