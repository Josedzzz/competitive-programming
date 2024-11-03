#include <iostream>
#include <ostream>
#include <string>
#include <unordered_map>

using namespace std;

void generateNumber(const string &roman,
                    const unordered_map<char, int> &values) {
  int n = roman.length() - 1;
  int currentMax = values.at(roman[n]);
  int result = currentMax;

  for (int i = n; i > 0; i--) {
    if (currentMax > values.at(roman[i - 1])) {
      result -= values.at(roman[i - 1]);
    } else {
      result += values.at(roman[i - 1]);
      currentMax = values.at(roman[i - 1]);
    }
  }
  cout << result << endl;
}

int main() {
  unordered_map<char, int> hashMap = {{'I', 1},   {'V', 5},   {'X', 10},
                                      {'L', 50},  {'C', 100}, {'D', 500},
                                      {'M', 1000}};

  int n;
  cin >> n;
  cin.ignore();

  for (int i = 0; i < n; ++i) {
    string roman;
    getline(cin, roman);
    generateNumber(roman, hashMap);
  }
}
