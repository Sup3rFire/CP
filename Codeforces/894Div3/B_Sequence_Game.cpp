#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<int> res;
  res.push_back(a[0]);
  for (int i = 1; i < n; i++) {
    res.push_back(a[i]);
    if (a[i] < a[i-1]) res.push_back(a[i]);
  }

  cout << res.size() << endl;
  for (auto i : res) {
    cout << i << " ";
  }
  cout << endl;
}

int main() {
  int t;
  cin >> t;
  for (int kagi = 0; kagi < t; kagi++) {
    solve();
  }
  return 0;
}