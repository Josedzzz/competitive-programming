#include <fstream>
#include <iostream>
#include <regex>
#include <sstream>
#include <string>

using namespace std;

// Part 1
int calculateSumOfProducts(const string &input) {
  regex pattern(R"(mul\((\d+),(\d+)\))");
  smatch match;
  int sum = 0;
  auto begin = sregex_iterator(input.begin(), input.end(), pattern);
  auto end = sregex_iterator();
  for (sregex_iterator i = begin; i != end; ++i) {
    match = *i;
    int a = stoi(match[1].str());
    int b = stoi(match[2].str());
    sum += a * b;
  }
  return sum;
}

int main() {
  string filename = "inputDay3.txt";
  ifstream file(filename);
  stringstream input;

  if (!file.is_open()) {
    cerr << "Error: Could not open file " << filename << endl;
    return 1;
  }

  string line;
  while (getline(file, line)) {
    input << line << " ";
  }

  file.close();

  string fullInput = input.str();

  int totalSum = calculateSumOfProducts(fullInput);

  cout << "Total Sum: " << totalSum << endl;

  return 0;
}
