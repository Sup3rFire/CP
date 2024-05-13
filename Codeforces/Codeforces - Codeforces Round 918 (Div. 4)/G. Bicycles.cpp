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

void loalisaverycuteegirl() {
  int n, m;
  cin >> n >> m;
  vector<pii> adj[n];
  int slowness[n];
  for (int i = 0; i < m; i++) {
    int u, v, w;
    cin >> u >> v >> w;
    u--; v--;
    adj[u].pb({v, w});
    adj[v].pb({u, w});
  }
  for (int i = 0; i < n; i++) cin >> slowness[i];
  
  ll dist[n][1000+5];
  for (int i = 0; i < n; i++) for (int j = 0; j < 1005; j++) dist[i][j] = 1e18;
  // dist[0][slowness[0]] = 0;
  priority_queue<pair<ll, pii>, vector<pair<ll, pii>>, greater<pair<ll, pii>>> pq;
  pq.push({0, {0, slowness[0]}});
  while (!pq.empty()) {
    auto [distnow, now] = pq.top();
    pq.pop();
    if (distnow >= dist[now.fi][now.se]) continue;
    dist[now.fi][now.se] = distnow;
    for (auto i : adj[now.fi]) {
      ll newdist = distnow+now.se*i.se;
      int nxtslow = min(now.se, slowness[i.fi]);
      if (dist[i.fi][nxtslow] > newdist) {
        pq.push({newdist, {i.fi, nxtslow}});
      }
    }
  }
  ll mval = 1e18;
  for (int i = 0; i < 1005; i++) {
    mval = min(mval, dist[n-1][i]);
  }
  cout << mval << '\n';
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) loalisaverycuteegirl();
  
  return 0;
}