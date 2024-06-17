#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds;

#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

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
  pair<pair<int, bool>, int> events[2*n];
  for (int i = 0; i < n; i++) {
    int l, r;
    cin >> l >> r;
    events[i*2] = {{l, 0}, i};
    events[i*2+1] = {{r, 1}, i};
  }

  sort(events, events+2*n);

  int passed = 0;
  int curr = 0;
  int npas[n];
  int ans[n];
  for (auto i : events) {
    if (i.fi.se == 0) {
      curr++;
      npas[i.se] = passed;
    } else {
      curr--;
      ans[i.se] = passed-npas[i.se] + curr;
      passed++;
    }
  }

  for (auto i : ans) cout << i << '\n';
  
  return 0;
}