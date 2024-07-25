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

const int maxn = 18;
int n, m, k;
int a[maxn];
int adj[maxn][maxn];
ll memo[maxn][1 << maxn];

ll dp(int prev, int mask) {
  if (prev != -1 && memo[prev][mask] != -1) return memo[prev][mask];
  ll ret = 0;
  if (__builtin_popcount(mask) >= m) {
    if (prev == -1) return 0;
    return memo[prev][mask] = 0;
  }
  for (int i = 0; i < n; i++) {
    if (!(mask & (1 << i))) {
      int bonus = 0;
      if (prev != -1) bonus = adj[prev][i];
      ret = max(ret, dp(i, mask | (1 << i))+a[i]+bonus);
    }
  }
  if (prev == -1) return ret;
  return memo[prev][mask] = ret; 
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  cin >> n >> m >> k;

  memset(memo, -1, sizeof memo);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < k; i++) {
    int x, y, c;
    cin >> x >> y >> c;
    adj[x-1][y-1] = c;
  }

  cout << dp(-1, 0);

  return 0;
}