#include <bits/stdc++.h>
using namespace std;

int main() {
  set<int> v;
  int n;
  cin >> n;

  int x;
  cin >> x;
  for (int i = 0; i < x; i++) {
    int y;
    cin >> y;
    v.insert(y);
  }
  cin >> x;
  for (int i = 0; i < x; i++) {
    int y;
    cin >> y;
    v.insert(y);
  }

  if (v.size() == n) {
    cout << "I become the guy." << endl;
  } else {
    cout << "Oh, my keyboard!" << endl;
  }

  return 0;
}