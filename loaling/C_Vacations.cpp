#include <bits/stdc++.h>
using namespace std;

// loal is a cute girl

#define ll long long
#define ld long double
#define pow2(x) (x)*(x)
#define le left
#define ri right
#define fi first
#define se second
#define pb push_back
#define all(v) v.begin(), v.end()
#define pii pair<int, int>
#define pll pair<long, long>

const ld EPS = 1e-9;
const ld PI = 3.141592653589793238462643383279502884197169399375105820974944;

const int maxn = 105;
int a[maxn];
int memo[maxn][3];

int dp(int x, int prev) {
  if (x == -1) return 0;
  if (memo[x][prev] != -1) return memo[x][prev];
  
  int minval = 1e9;
  if (a[x] >= 2 && prev != 2) {
    minval = min(dp(x-1, 2), minval);
  }
  if (a[x] % 2 == 1 && prev != 1) {
    minval = min(dp(x-1, 1), minval);
  }
  if (minval == 1e9) {
    minval = min(dp(x-1, 0), minval) + 1;
  }
  return memo[x][prev] = minval;
}

int main () {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  memset(memo, -1, sizeof(memo));

  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  cout << dp(n-1, 0) << endl;
  
  return 0;
}