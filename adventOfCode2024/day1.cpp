#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <ostream>
#include <sstream>
#include <vector>
using namespace std;

// Part 1
int calculateTotalDistance(vector<int> &left, vector<int> &right) {
  sort(left.begin(), left.end());
  sort(right.begin(), right.end());
  int totalDistance = 0;
  for (size_t i = 0; i < left.size(); ++i) {
    totalDistance += abs(left[i] - right[i]);
  }
  return totalDistance;
}

// Part 2
int calculateSimilarityScore(const vector<int> &left,
                             const vector<int> &right) {
  unordered_map<int, int> rightFreq;
  for (size_t i = 0; i < right.size(); ++i) {
    rightFreq[right[i]]++;
  }

  // Calculate similarity score
  int similarityScore = 0;
  for (size_t i = 0; i < left.size(); ++i) {
    similarityScore += left[i] * rightFreq[left[i]];
  }

  return similarityScore;
}

int main() {
  vector<int> left;
  vector<int> right;

  cout << "Enter the data:" << endl;
  string line;
  while (getline(cin, line) && !line.empty()) {
    stringstream ss(line);
    int leftNum, rightNum;
    ss >> leftNum >> rightNum;
    left.push_back(leftNum);
    right.push_back(rightNum);
  }

  if (left.size() != right.size()) {
    cout << "Error: The two list must have the same number of elements" << endl;
    return -1;
  }

  int totalDistance = calculateTotalDistance(left, right);
  cout << "Total distance: " << totalDistance << endl;

  int similarityScore = calculateSimilarityScore(left, right);
  cout << "Similarity score: " << similarityScore << endl;

  return 0;
}
