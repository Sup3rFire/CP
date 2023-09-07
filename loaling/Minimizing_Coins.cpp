#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
const int MAXN = 1e6+5;
int n, x;
int coins[MAXN];
int memo[MAXN];

int dp(int x) {
  if (x == 0) return 0;
  if (x < 0) return INF;
  if (memo[x] != -1) return memo[x];
  int leastCoins = INF;
  for (int i = 0; i < n; i++) {
    leastCoins = min(leastCoins, dp(x-coins[i])+1);
  }
  return memo[x] = leastCoins;
} 

int main() {
  for (int i = 0; i < MAXN; i++) {
    memo[i] = -1;
  }

  cin >> n >> x;
  for (int i = 0; i < n; i++) {
    cin >> coins[i];
  }
  int leastCoins = dp(x);
  if (leastCoins >= INF) {
    cout << -1 << endl;
  } else {
    cout << leastCoins << endl;
  }
}