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

const int maxn = 1005;
vector<int> connected[maxn];
bool visited[maxn];
bool parity[maxn];
bool possible = false;

pii search(int x) {
  visited[x] = true;
  int cnt[2] = {0, 0};
  cnt[parity[x]]++;
  for (auto i : connected[x]) {
    if (visited[i]) {
      if (parity[i] == parity[x]) possible = false;
    } else {
      parity[i] = !parity[x];
      pii res = search(i);
      cnt[0] += res.fi;
      cnt[1] += res.se;
    }
  }
  return {cnt[0], cnt[1]};
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int n;
  cin >> n;
  array<ll, 3> a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i][0] >> a[i][1] >> a[i][2];
  }
  for (int i = 0; i < n; i++) {
    for (int j = i+1; j < n; j++) {
      if (pow2(a[i][0]-a[j][0])+pow2(a[i][1]-a[j][1]) == pow2(a[i][2]+a[j][2])) {
        connected[i].pb(j);
        connected[j].pb(i);
      }
    }
  }
  
  for (int i = 0; i < n; i++) {
    if (!visited[i]) {
      possible = true;
      pii res = search(i);
      if (res.fi != res.se && possible) {
        cout << "YES";
        return 0;
      }
    }
  }
  cout << "NO";

  return 0;
}