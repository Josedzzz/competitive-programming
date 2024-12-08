#include <cmath>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

// Part 1
bool isSafe(const vector<int> &report) {
  if (report.size() < 2)
    return false;

  bool increasing = report[1] > report[0];
  for (size_t i = 1; i < report.size(); ++i) {
    int diff = report[i] - report[i - 1];
    if (abs(diff) < 1 || abs(diff) > 3) {
      return false;
    }
    if ((diff > 0) != increasing) {
      return false;
    }
  }

  return true;
}

// Part 2
bool isSafeWithDampener(const vector<int> &report) {
  if (isSafe(report)) {
    return true;
  }

  for (size_t i = 0; i < report.size(); ++i) {
    vector<int> modifiedReport = report;
    modifiedReport.erase(modifiedReport.begin() + i);
    if (isSafe(modifiedReport)) {
      return true;
    }
  }

  return false;
}

int main() {
  cout << "Enter the reports" << endl;
  string line;
  int safeCount = 0;

  while (getline(cin, line) && !line.empty()) {
    stringstream ss(line);
    vector<int> report;
    int level;

    while (ss >> level) {
      report.push_back(level);
    }

    if (isSafeWithDampener(report)) {
      ++safeCount;
    }
  }

  cout << "Number of safe reports: " << safeCount << endl;

  return 0;
}
