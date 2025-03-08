#include <iostream>
#include <sstream>
#include <stack>
#include <string>
using namespace std;

bool isOperator(const string &token) {
  return token == "+" || token == "-" || token == "*" || token == "/";
}

int performOperation(int a, int b, const string &op) {
  if (op == "+")
    return a + b;
  if (op == "-")
    return a - b;
  if (op == "*")
    return a * b;
  if (op == "/")
    return a / b;
  return 0;
}

int evaluateRPN(const string &expression) {
  stack<int> st;
  stringstream ss(expression);
  string token;
  while (ss >> token) {
    if (isOperator(token)) {
      // Pop the top two operands from the stack
      int operand2 = st.top();
      st.pop();
      int operand1 = st.top();
      st.pop();
      // Perform the operation and push the result back to the stack
      int result = performOperation(operand1, operand2, token);
      st.push(result);
    } else {
      st.push(stoi(token));
    }
  }
  return st.top();
}

int main() {
  string expression;
  getline(cin, expression);
  int result = evaluateRPN(expression);
  cout << result << "\n";
}
