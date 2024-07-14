#include <bits/stdc++.h>
using namespace std;

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

const ld EPS = 1e-9;
const ld PI = 3.141592653589793238462643383279502884197169399375105820974944;

const int maxn = 2e5+5;
int color[maxn];
vector<int> adj[maxn];
set<int> distinct[maxn];
int amount[maxn];

void dfs(int curr, int parent) {
  distinct[curr].insert(color[curr]);
  for (auto &nxt : adj[curr]) {
    if (nxt == parent) continue;
    
    dfs(nxt, curr);

    auto &v = distinct[curr], &u = distinct[nxt];
    if (u.size() > v.size()) {
      swap(v, u);
    }

    for (auto &i : u) v.insert(i);
  }
  amount[curr] = distinct[curr].size();
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) cin >> color[i];
  for (int i = 0; i < n-1; i++) {
    int u, v;
    cin >> u >> v;
    u--; v--;
    adj[u].pb(v);
    adj[v].pb(u);
  }

  dfs(0, -1);
  
  for (int i = 0; i < n; i++) {
    cout << amount[i] << ' ';
  }

  return 0;
}
