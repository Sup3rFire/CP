#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ll l, r;
  cin >> l >> r;

  if (r-l < 2) {
    cout << -1 << endl;
    return 0;
  }
  if (l % 2 == 0) {
    cout << l << " " << l+1 << " " << l+2 << endl;
  } else {
    if (r-l < 3) {
      cout << -1 << endl;
    } else {
      cout << l+1 << " " << l+2 << " " << l+3 << endl;
    }
  }

  return 0;
}