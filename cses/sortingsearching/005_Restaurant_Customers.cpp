#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> arrivals(n), departures(n);
  for (int i = 0; i < n; i++) {
    cin >> arrivals[i] >> departures[i];
  }

  sort(arrivals.begin(), arrivals.end());
  sort(departures.begin(), departures.end());

  int i = 0, j = 0, count = 0, best = 0;
  while (i < n) {
    if (arrivals[i] <= departures[j]) {
      count++;
      best = max(best, count);
      i++;
    } else {
      count--;
      j++;
    }
  }

  cout << best << endl;
  return 0;
}
