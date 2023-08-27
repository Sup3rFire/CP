#include <bits/stdc++.h>
using namespace std;

const int maxn = 20;
set<char> a[maxn];
void solve() {
  for (int i = 0; i < maxn; i++) {
    a[i].clear();
  }
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      char x;
      cin >> x;
      a[j].insert(x);
    }
  }
  int idx = 0;
  char req[4] = {'v', 'i', 'k', 'a'};
  for (int j = 0; j < m; j++) {
    if (a[j].count(req[idx])) {
      idx++;
    }
    if (idx >= 4) break;
  }
  cout << (idx >= 4 ? "YES" : "NO") << endl;
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) solve();
  return 0;
}