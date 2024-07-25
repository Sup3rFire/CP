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

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int n, m;
  cin >> n >> m;
  int a[512];
  memset(a, 0, sizeof a);

  for (int i = 0; i < n; i++) {
    int amo;
    cin >> amo;
    int x = 0;
    while (amo--) {
      int y;
      cin >> y;
      x |= 1 << (y-1);
    }
    a[x]++;
  }

  pii b[512];
  memset(b, -1, sizeof b);
  for (int i = 0; i < m; i++) {
    int price, amo;
    cin >> price >> amo;
    int x = 0;
    while (amo--) {
      int y;
      cin >> y;
      x |= 1 << (y-1);
    }
    if (b[x].fi != -1) b[x] = min(b[x], {price, i+1});
    else b[x] = {price, i+1};
  }

  pair<int, pii> c[512];
  memset(c, -1, sizeof c);
  for (int i = 0; i < 512; i++) {
    for (int j = i+1; j < 512; j++) {
      if (b[i].fi == -1 || b[j].fi == -1 || i == j) continue;
      int combine = i|j;
      if (c[combine].fi != -1) c[combine] = min(c[combine], {b[i].fi+b[j].fi, {i, j}});
      else c[combine] = {b[i].fi+b[j].fi, {i, j}};
    }
  }

  pair<pii, int> ans = {{-1e9, -1e9}, -1e9};
  for (int i = 0; i < 512; i++) {
    if (c[i].fi == -1) continue;
    int amo = 0;
    for (int j = 0; j < 512; j++) {
      if (i & j == j) amo += a[j];
    }
    max(ans, {{amo, -c[i].fi}, i});
  }
  
  return 0;
}