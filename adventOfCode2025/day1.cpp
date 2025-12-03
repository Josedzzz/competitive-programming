#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  int count = 0;
  int number = 50;

  while (cin >> s) {
    int aux = stoi(s.substr(1));

    if (s[0] == 'L') {
      number = number - aux;
    } else {
      number = number + aux;
    }

    number = ((number % 100) + 100) % 100;

    if (number == 0) {
      count++;
    }
  }

  cout << count << endl;
  return 0;
}
