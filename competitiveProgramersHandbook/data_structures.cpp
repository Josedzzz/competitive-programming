#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

int main() {
  // Dynamic array ===================================
  vector<int> v = {2, 4, 5, 2, 1};

  // Normal iteration
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << "\n";
  }

  // For each iteration
  for (auto x : v) {
    cout << x << "\n";
  }

  // Set structure ===================================
  set<int> s = {2, 5, 6, 8};
  cout << s.size() << "\n";
  for (auto x : s) {
    cout << x << "\n";
  }

  // Map structure ==================================
  map<string, int> m;
  m["monkey"] = 4;
  m["banana"] = 3;
  m["harpsichord"] = 9;
  for (auto x : m) {
    cout << x.first << " " << x.second << "\n";
  }

  // Stack structure ================================
  stack<int> st;
  st.push(3);
  st.push(2);
  st.push(5);
  cout << st.top(); // 5
  st.pop();
  cout << st.top(); // 2

  // Queue structure ================================
  queue<int> q;
  q.push(3);
  q.push(2);
  q.push(5);
  cout << q.front(); // 3
  q.pop();
  cout << q.front(); // 2
}
