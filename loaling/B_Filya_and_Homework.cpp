#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  set<int> a;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a.insert(x);
  }
  if (a.size() < 3) {
    cout << "YES" << endl;
  } else if (a.size() > 3) {
    cout << "NO" << endl;
  } else {
    int idx = 0;
    int dist;
    int mid;
    for (auto i : a) {
      if (idx == 0) {
        dist = i;
      } else if (idx == 1) {
        dist = i-dist;
        mid = i;
      } else {
        if (dist != i-mid) {
          cout << "NO" << endl;
        } else {
          cout << "YES" << endl;
        }
      }
      idx++;
    }
  }
}