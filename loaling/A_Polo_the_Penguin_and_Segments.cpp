#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  int total = 0;
  for (int i = 0; i < n; i++) {
    int l, r;
    cin >> l >> r;
    total += r-l+1;
  }

  if (total % k == 0) cout << 0 << endl;
  else cout << k-(total%k) << endl;

  return 0;
}