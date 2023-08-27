#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll target;

void solve() {
  cin >> target;

  ll n = 2;
  ll ans = 0;
  while (ans < target) {
    if (n % 2 == 0) {
      ans = n / 2 * (n-1);
    } else {
      ans = (n-1) / 2 * n;
    }
    n++;
  }

  n--;
  ll orin = n; 
  while (ans > target) {
    n--;
    ans -= n + 1;
  }

  cout << orin + target-ans << endl;
}

int main() {
  int t;
  cin >> t;
  for (int kagi = 0; kagi < t; kagi++) {
    solve();
  }
  return 0;
}