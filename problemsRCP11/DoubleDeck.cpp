#include <iostream>
#include <vector>
using namespace std;

int maxScore(int n, int k, const vector<int> &deckA, const vector<int> &deckB) {
  int i = 0, j = 0, score = 0;
  int size = deckA.size();
  while (i < size && j < size) {
    if (deckA[i] == deckB[j]) {
      score++;
      i++;
      j++;
    } else if (deckA[i] < deckB[j]) {
      i++;
    } else {
      j++;
    }
  }
  return score;
}

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> deckA(n * k), deckB(n * k);
  for (int i = 0; i < n * k; i++)
    cin >> deckA[i];
  for (int i = 0; i < n * k; i++)
    cin >> deckB[i];

  cout << maxScore(n, k, deckA, deckB) << endl;
  return 0;
}
