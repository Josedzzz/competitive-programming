#include <iostream>
#include <queue>
using namespace std;

struct Procces {
  string name;
  int time;
};

int main() {
  int n, quantum;
  cin >> n >> quantum;
  queue<Procces> q;
  for (int i = 0; i < n; i++) {
    string name;
    int time;
    cin >> name >> time;
    q.push({name, time});
  }
  int currentTime = 0;
  while (!q.empty()) {
    Procces current = q.front();
    q.pop();
    if (current.time <= quantum) {
      currentTime += current.time;
      cout << current.name << " " << currentTime << endl;
    } else {
      currentTime += quantum;
      current.time -= quantum;
      q.push(current);
    }
  }
  return 0;
}
