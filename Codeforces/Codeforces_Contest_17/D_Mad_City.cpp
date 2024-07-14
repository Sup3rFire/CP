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

const int maxn = 2e5+5;
// const int maxn = 15;
vector<int> adj[maxn];
bool vis[maxn];
bool loop[maxn];
int loopstart = -1;

int findLoop(int nd, int par) {
  vis[nd] = true;
  int ret = 1e9;
  for (auto i : adj[nd]) {
    if (i == par) continue;
    if (vis[i] && loopstart == -1) {
      loopstart = i;
      ret = 0;
      loop[nd] = true;
    } else if (!vis[i]) {
      int rt1 = findLoop(i, nd);
      if (!loop[i] || loopstart == i) {
        ret = min(ret, rt1+1);
      } else {
        loop[i] = true;
        ret = 0;
      }
    }
  }
  return ret;
}

int findDist(int nd, int par = -1) {
  vis[nd] = true;
  if (nd == loopstart) return 0;
  int ret = 1e9;
  for (auto i : adj[nd]) {
    if (par == i) continue;
    ret = min(ret, findDist(i, nd)+1);
  }
  return ret;
}

void loalisaverycuteegirl() {
  int n, a, b;
  cin >> n >> a >> b; a--, b--;
  loopstart = -1;
  for (int i = 0; i < n; i++) {
    adj[i].clear();
    vis[i] = false;
    loop[i] = false;
  }
  for (int i = 0; i < n; i++) {
    int u, v;
    cin >> u >> v;
    u--; v--;
    adj[u].pb(v);
    adj[v].pb(u);
  }

  findLoop(b, -1);
  for (int i = 0; i < n; i++) vis[i] = false;
  int dista = findDist(a);
  for (int i = 0; i < n; i++) vis[i] = false;
  int distb = findDist(b);
  if (distb < dista) cout << "YES\n";
  else cout << "NO\n";
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) loalisaverycuteegirl();
  
  return 0;
}