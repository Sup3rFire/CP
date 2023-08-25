#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  int prev = 0;
  int cnt = 1;
  vector<int> consecutives;
  vector<int> differences;

  cin >> prev;
  for (int i = 1; i < n; i++) {
    int x;
    cin >> x;
    if (x != prev) {
      consecutives.push_back(cnt);
      differences.push_back(prev-x);
      prev = x;
      cnt = 1;
    } else {
      cnt++;
    }
  }
  consecutives.push_back(cnt);
  differences.push_back(prev);
  for (int i = 0; i < consecutives.size(); i++) {
    int reverseidx = differences.size() - 1 -i;
    if (consecutives[i] != differences[reverseidx]) {
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
}

int main() {
  int t;
  cin >> t;
  for (int kagi = 0; kagi < t; kagi++) {
    solve();
  }
  return 0;
}