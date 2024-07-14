#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds;

// loal is the cutest girl

#define ll long long
#define int ll 
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

void loalisaverycuteegirl() {
  int n, k, z;
  cin >> n >> k >> z;
  int prefsum[n+1];
  prefsum[0] = 0;
  int a[n+1];
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    prefsum[i] = prefsum[i-1] + a[i];
  }

  int mx = prefsum[k+1];
  for (int sleft = 1; sleft <= k; sleft++) {
    int moves = k-sleft;
    int ans = prefsum[sleft+1];

    int gleft = min(z, moves/2);
    ans += a[sleft]*gleft+a[sleft+1]*gleft;
    moves -= gleft*2;
    if (moves == 1 && gleft != z) ans += a[sleft];
    else ans += prefsum[sleft+1+moves]-prefsum[sleft+1];

    mx = max(mx, ans);
  }

  cout << mx << '\n';
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) loalisaverycuteegirl();
  
  return 0;
}