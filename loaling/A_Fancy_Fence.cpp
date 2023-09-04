#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int t;
    cin >> t;
    if (t == 0 || t == 180) {
      cout << "NO" << endl;
      continue;
    }
    if (360%(180-t) == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}