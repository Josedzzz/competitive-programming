#include <iostream>
#include <vector>
using namespace std;

int main() {
  int x;
  cin >> x;
  vector<int> steps;
  steps.push_back(5);
  steps.push_back(4);
  steps.push_back(3);
  steps.push_back(2);
  steps.push_back(1);
  int count = 0;
  int step = 0;
  int i = 0;
  while (step < x) {
    if (step + steps[i] <= x) {
      step += steps[i];
      count++;
    } else {
      i++;
    }
  }
  cout << count << endl;
  return 0;
}
