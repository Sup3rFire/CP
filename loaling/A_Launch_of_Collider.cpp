#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int topmostr = -1;
  vector<pair<int, int>> collisions;
  for (int i = 0; i < n; i++) {
    char x;
    cin >> x;
    if (x == 'R') {
      topmostr = i;
    } else {
      if (topmostr != -1) {
        collisions.push_back({topmostr, i});
        topmostr = -1;
      }
    }
  }

  if (collisions.size() == 0) {
    cout << -1 << endl;
    return 0;
  }

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int mindist = 1e9+5;
  for (auto &[l, r] : collisions) {
    mindist = min(mindist, a[r]-a[l]);
  }

  cout << mindist / 2 << endl;

  return 0;
}