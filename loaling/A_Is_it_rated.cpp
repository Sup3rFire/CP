#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int prev = 9999;
  bool unordered = false;
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    if (x != y) {
      cout << "rated" << endl;
      return 0;
    }
    if (x > prev) {
      unordered = true;
    }
    prev = x;
  }

  if (unordered) {
    cout << "unrated" << endl;
  } else {
    cout << "maybe" << endl;
  }

  return 0;
}