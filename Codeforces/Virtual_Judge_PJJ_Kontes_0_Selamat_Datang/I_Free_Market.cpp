#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds;

// loal is the cutest girl

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
#define pll pair<long long, long long>
#define isvowel(x) (x) == 'a' || (x) == 'i' || (x) == 'u' || (x) == 'e' || (x) == 'o'
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> 

const ld EPS = 1e-9;
const ld PI = 3.141592653589793238462643383279502884197169399375105820974944;

const int maxn = 55;
const int maxd = 1e4+5;

int c[maxn];

int memo[maxn][maxd*maxn];
int dp(int x, int d) {
  if (x < 0) return 0;
  if (memo[x][d] != -1) return memo[x][d];

  int ret = dp(x-1, d);
  if (d >= c[x]) {
    ret = max(ret, dp(x-1, d-c[x])+c[x]);
  }

  return memo[x][d] = ret;
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int n, d;
  cin >> n >> d;

  for (int i = 0; i < n; i++) cin >> c[i];
  
  memset(memo, -1, sizeof memo);

  int ans = 0;
  int time = 0;
  for (int curr = dp(n-1, d); ; time++, ans = curr, curr = dp(n-1, ans+d)) {
    if (curr <= ans) break;
  }

  cout << ans << ' ' << time;

  return 0;
}