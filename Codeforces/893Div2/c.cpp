#include <bits/stdc++.h>
using namespace std;

bool picked[(int) 2e6 + 7];

void solve() {
  for (int i = 0; i < 2e6+7; i++) {
    picked[i] = false;
  }
  int n;
  cin >> n;

  cout << 1;
  for (int i = 2; i <= n; i++) {
    if (picked[i]) continue;
    int mult = i;
    while (mult <= n) {
      cout << " " << mult;
      picked[mult] = true;
      mult *= 2;
    }
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