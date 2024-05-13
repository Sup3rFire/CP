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

const int maxn = 1e5+5;

int n, m;
vector<pii> adj[maxn];
pii dist[maxn];

void djikstra() {
  priority_queue<pii, vector<pii>, greater<pii>> pq;
  pq.push({0, 1});
  while (!pq.empty() && dist[n].se == 1e9) {
    pii val = pq.top();
    pq.pop();
    if (dist[val.se].se == 1e9) {
      for (auto v : adj[val.se]) {
        int newdist = v.se+val.fi;
        pq.push({newdist, v.fi});
      }
    }
    if (dist[val.se].fi == 1e9) dist[val.se].fi = val.fi;
    else if (dist[val.se].se == 1e9) dist[val.se].se = val.fi;
  }
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  for (int i = 0; i < maxn; i++) {
    dist[i] = {1e9, 1e9};
  }
  dist[1] = {0, 1e9};

  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int u, v, t;
    cin >> u >> v >> t;
    adj[u].pb({v, t});
    adj[v].pb({u, t});
  }

  djikstra();

  cout << dist[n].fi << endl << dist[n].se;
  
  return 0;
}