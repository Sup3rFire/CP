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

const int maxn = 1e5+5;

int n, m;
int getAns(int x) {
  x--;
  return x*(x+1)/2;
}

int low[maxn], disc[maxn], t;
vector<int> adj[maxn];

int mn;
int dfs(int nd, int par) {
  int ret = 1;
  low[nd] = disc[nd] = ++t;
  for (auto i : adj[nd]) {
    if (disc[i] == 0) {
      int dret = dfs(i, nd);
      ret += dret;
      low[nd] = min(low[i], low[nd]);
      if (low[i] > disc[nd]) {
        mn = min(mn, getAns(n-dret)+getAns(dret));
      }
    } else if (i != par) {
      low[nd] = min(disc[i], low[nd]);
    }
  }
  return ret;
}

void loalisaverycuteegirl() {
  cin >> n >> m;
  
  mn = getAns(n);
  t = 0;

  for (int i = 1; i <= n; i++) {
    adj[i].clear();
    disc[i] = 0;
  }

  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    adj[u].pb(v);
    adj[v].pb(u);
  }
  
  dfs(1, -1);

  cout << mn << '\n';
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) loalisaverycuteegirl();
  
  return 0;
}