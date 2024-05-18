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

const int maxn = 2e5+5;
int n, q, now = 0;
map<int, int> adj[maxn];
pii euler[maxn];
pii ridx[maxn];

ll BIT[maxn];
void update(int x, ll upd) {
  for (;x <= n; x += x & -x) BIT[x] += upd;
}
ll get(int x) {
  ll accu = 0;
  for (;x; x -= x & -x) accu += BIT[x];
  return accu;
}

void dfs(int x) {
  euler[x].fi = ++now;
  for (auto i : adj[x]) {
    if (i.fi == 1) continue;
    dfs(i.fi);
  }
  euler[x].se = now;
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  cin >> n >> q;

  for (int i = 1; i <= 2*n-2; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    ridx[i] = {a, b};
    adj[a][b] = c;
  }
  
  dfs(1);

  for (int a = 1; a <= n; a++) {
    for (auto i : adj[a]) {
      if (i.fi == 1) continue;
      update(euler[i.fi].fi, i.se);
      update(euler[i.fi].se+1, -i.se);
      // cout << euler[i.fi].fi << ' ' << euler[i.fi].se+1 << ' ' << i.se << '\n';
    }
  }

  // cout << '\n';

  // for (int a = 1; a <= n; a++) {
  //   cout << euler[a].fi << ' ' << euler[a].se << ' ' << get(euler[a].fi) << '\n';
  // }

  while (q--) {
    int type; cin >> type;
    if (type == 1) {
      int i, w; cin >> i >> w;
      int a = ridx[i].fi, b = ridx[i].se;
      if (b == 1) adj[a][b] = w;
      else {
        int old = adj[a][b];
        update(euler[b].fi, w-old);
        update(euler[b].se+1, -(w-old));
        adj[a][b] = w;
      }
    } else {
      int u, v; cin >> u >> v;
      if (u == v) cout << "0\n";
      else if (euler[u].fi < euler[v].fi && euler[u].se >= euler[v].fi) {
        cout << get(euler[v].fi)-get(euler[u].fi) << '\n';
      } else {
        cout << get(euler[v].fi)+adj[u][1] << '\n';
      }
    }
  }
  
  return 0;
}