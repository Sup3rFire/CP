#include <bits/stdc++.h>
using namespace std;

int n;
int a[1000];
int memo[1000][3];
int dp(int x, int d = 0) {
  if (x < 0 || x >= n) return 0;
  if (memo[x][d] != -1) return memo[x][d];

  int sum = 1;
  if (x != 0) {
    if (a[x-1] < a[x]) sum += dp(x-1);
    if (a[x-1] == a[x] && d != 1) sum += dp(x-1, 2);
  }
  if (x != n-1) {
    if (a[x+1] < a[x]) sum += dp(x+1);
    if (a[x+1] == a[x] && d != 2) sum += dp(x+1, 1);
  }
  return memo[x][d] = sum;
}

int main() {
  memset(memo, -1, sizeof(memo));
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int mx = 0;
  for (int i = 0; i < n; i++) {
    mx = max(mx, dp(i));
  }

  cout << mx << endl;
}