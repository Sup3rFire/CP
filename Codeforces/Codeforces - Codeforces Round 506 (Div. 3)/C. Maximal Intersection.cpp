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
  
  int n;
  cin >> n;
  pii a[n];
  pii pre[n];
  pii suf[n];
  for (int i = 0; i < n; i++) cin >> a[i].fi >> a[i].se;

  pre[0] = a[0];
  suf[n-1] = a[n-1];
  int ans = 0;
  for (int i = 1; i < n; i++) {
    pre[i].fi = max(pre[i-1].fi, a[i].fi);
    pre[i].se = min(pre[i-1].se, a[i].se);
  }
  for (int i = n-2; i >= 0; i--) {
    suf[i].fi = max(suf[i+1].fi, a[i].fi);
    suf[i].se = min(suf[i+1].se, a[i].se);
  }

  int mxans = max(pre[n-2].se-pre[n-2].fi, suf[1].se-suf[1].fi);

  for (int i = 1; i < n-1; i++) {
    mxans = max(mxans, min(suf[i+1].se, pre[i-1].se)-max(suf[i+1].fi, pre[i-1].fi));
  }

  cout << max(mxans, 0);
  
  return 0;
}