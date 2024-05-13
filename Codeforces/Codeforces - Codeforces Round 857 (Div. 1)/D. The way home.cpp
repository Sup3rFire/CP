#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds;

// loal is the cutest girl


#define ll long long
#define int ll
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

int n, m, s;
const int maxn = 805;
const ll inf = 1e16; 
ll t[maxn];
int adj[maxn][maxn];

pll memo[maxn];
pll dp(int curr) {
  // if (snow >= adj[curr][n]) return 0;
  if (memo[curr].fi != -1) return memo[curr];
  if (curr == 1) return {0, s};

  // pll distToN = max(adj[curr][n]-snow, (ll)0);
  // int useToN = (distToN+t[curr]-1)/t[curr];
  pll ret = {inf, inf};
  for (int i = 1; i <= n; i++) {
    if (adj[i][curr] == inf || t[i] >= t[curr]) continue;
    auto newret = dp(i);
    int dist = max(adj[i][curr]-newret.se, (ll)0);
    int use = (dist+t[i]-1)/t[i];
    newret.fi += use;
    // int extra = dist-use*t[i];
    newret.se = newret.se-adj[i][curr]+use*t[i];
    if (newret.fi > ret.fi) continue;
    if (newret.fi < ret.fi) ret = newret;
    else ret = max(ret, newret);
    // ret = min(ret, dp(i, snow+use*t[curr]-adj[curr][i])+use);
  }
  return memo[curr] = ret;
}

void solve() {
  memset(memo, -1, sizeof memo);

  cin >> n >> m >> s;
  
  for (int i = 1; i <= n; i++) {
    cin >> t[i];
  }
  t[n] = inf;

  for (int i = 1; i <= n; i++) for (int j = 1; j <= n; j++) adj[i][j] = inf;
  for (int i = 0; i < m; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    if (adj[a][b] == inf) adj[a][b] = c;
    else adj[a][b] = min(adj[a][b], c);
  }
  
  for (int k = 1; k <= n; k++) {
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++) {
        if (adj[i][k] + adj[k][j] < adj[i][j])
          adj[i][j] = adj[i][k] + adj[k][j];
      }
    }
  }

  if (adj[1][n] == inf) {
    cout << "-1\n";
    return;
  }

  ll ret = dp(n).fi;

  cout << ret << '\n';
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

  int t; cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}