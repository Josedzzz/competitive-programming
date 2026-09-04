// n = applicants
// m = apartments
//
// k = tolerance = ni - mi <= k

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m >> k;

  vector<int> nList(n);
  vector<int> mList(m);
  for (int i = 0; i < n; i++) {
    cin >> nList[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> mList[i];
  }

  sort(nList.begin(), nList.end());
  sort(mList.begin(), mList.end());

  int i = 0, j = 0, count = 0;
  while (i < n && j < m) {
    if (mList[j] < nList[i] - k) {
      // apartment too small for this applicant, and everyone after
      // is even pickier (sorted), so this apartment is useless now
      j++;
    } else if (mList[j] > nList[i] + k) {
      // apartment too big for this applicant, but a bigger applicant
      // later might still want it, so drop the applicant instead
      i++;
    } else {
      count++;
      i++;
      j++;
    }
  }

  cout << count << endl;
  return 0;
}
