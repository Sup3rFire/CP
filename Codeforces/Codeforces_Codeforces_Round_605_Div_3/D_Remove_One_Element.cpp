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
  int a[n];
  for (auto &i : a) {
    cin >> i;
  }

  int lfrom[n];
  lfrom[0] = 1;
  int mx = 1;
  for (int i = 1; i < n; i++) {
    if (a[i] > a[i-1]) lfrom[i] = lfrom[i-1]+1;
    else lfrom[i] = 1;
    mx = max(lfrom[i], mx);
  }
  int rfrom[n];
  rfrom[n-1] = 1;
  for (int i = n-2; i >= 0; i--) {
    if (a[i] < a[i+1]) rfrom[i] = rfrom[i+1]+1;
    else rfrom[i] = 1;
  }

  for (int i = 1; i < n-1; i++) {
    if (a[i-1] < a[i+1]) mx = max(mx, rfrom[i+1] + lfrom[i-1]);
  }

  cout << mx;
  
  return 0;
}