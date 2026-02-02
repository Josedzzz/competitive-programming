#include <iostream>
using namespace std;

int main() {
  string s1, s2, s3;
  cin >> s1 >> s2 >> s3;

  bool symmetric = true;

  if (s1[0] != s3[2])
    symmetric = false;
  if (s1[2] != s3[0])
    symmetric = false;

  if (s1[1] != s3[1])
    symmetric = false;
  if (s2[0] != s2[2])
    symmetric = false;

  if (symmetric) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
