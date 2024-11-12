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

const int maxn = 355;

int n, k;
string s;

short pref[maxn];
char memo[maxn][maxn][maxn];
bool dp(int l, int r, int ax) {
  if (~memo[l][r][ax]) return memo[l][r][ax];
  if (ax >= k) return memo[l][r][ax] = 0;
  if (pref[n]-pref[r+1]+pref[l]-ax >= k) return memo[l][r][ax] = 1;

  if ((r-l)%2 == (n)%2) {
    return memo[l][r][ax] = min(dp(l+1, r, ax), dp(l, r-1, ax));
  } else {
    return memo[l][r][ax] = max(dp(l+1, r, ax+(s[l]=='C')), dp(l, r-1, ax+(s[r]=='C')));
  }
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  memset(memo, -1, sizeof memo);

  cin >> n >> k;
  cin >> s;
  
  pref[0] = 0;
  for (int i = 0; i < n; i++) {
    pref[i+1] = pref[i]+(s[i]=='C');
  }

  cout << (dp(0, n-1, 0) ? "DA" : "NE") << '\n';

  return 0;
}