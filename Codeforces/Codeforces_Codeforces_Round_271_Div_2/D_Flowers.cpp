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

const int maxn = 1e5+1;
const int p = 1000000007;

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int t, k;
  cin >> t >> k;
  int pref[maxn];
  int dp[maxn];
  dp[0] = 1;
  pref[0] = 0;
  
  for (int i = 1; i < maxn; i++) { 
    dp[i] = dp[i-1] % p;
    if (i >= k) dp[i] += dp[i-k];
    dp[i] %= p;
    pref[i] = pref[i-1]+dp[i];
    pref[i] %= p;
  }

  while (t--) {
    int l, r;
    cin >> l >> r;
    cout << (pref[r]-pref[l-1]+p)%p << '\n';
  }

  return 0;
}