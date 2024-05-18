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

const int maxn = 1e5+5;
int n, m;
vector<int> adj[maxn];
int state[maxn];
bool visited[maxn];
bool interesting[maxn];

void dfs(int x) {
  if (visited[x]) return;
  visited[x] = true;
  if (state[x] == 2) {
    interesting[x] = true;
  }
  for (auto i : adj[x]) {
    if (state[i] == 1) continue;
    dfs(i);
    if (interesting[i]) interesting[x] = true;
  }
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  cin >> n >> m;
  for (int i = 1; i <= n; i++) cin >> state[i];

  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    adj[u].pb(v);
  }

  for (int i = 1; i <= n; i++) {
    if (state[i] == 1) dfs(i);
  }
  for (int i = 1; i <= n; i++) {
    cout << interesting[i] << '\n';
  }
  
  return 0;
}