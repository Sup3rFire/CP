#include <bits/stdc++.h>
using namespace std;

bool val[3005];
int n;

void solve() {
  int k;
  cin >> n >> k;

  for (int i = 0; i < n; i++) {
    char x;
    cin >> x;
    val[i] = x == '1'; 
    cout << val[i];
  }
  cout << endl;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    solve();
  }

  return 0;
}