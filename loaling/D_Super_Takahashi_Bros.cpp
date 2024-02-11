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
vector<pii> adj[maxn];
ll dist[maxn];
priority_queue<pll, vector<pll>, greater<pll>> PQ;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  for (int i = 0; i < maxn; i++) dist[i] = 1e18;

  int n;
  cin >> n;
  for (int i = 1; i<= n; i++) {
    int a, b, x;
    cin >> a >> b >> x;
    adj[i].pb({i+1, a});
    adj[i].pb({x, b});
  }
  
  PQ.push({0, 1});

  while (!PQ.empty())
  {
    auto [cur_dist, cur_node] = PQ.top(); // C++ 17

    PQ.pop();
    for (auto &[next_node, w] : adj[cur_node]) // C++ 17
    {
      ll next_dist = cur_dist + w;
      if (next_dist >= dist[next_node])
        continue;

      dist[next_node] = next_dist;
      PQ.push({next_dist, next_node});
    }
  }

  cout << dist[n];

  return 0;
}