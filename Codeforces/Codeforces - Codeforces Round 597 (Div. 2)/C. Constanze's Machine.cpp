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
const int m = 1e9+7;

const int maxn = 1e5+5;
string s;
ll memo[maxn];
ll dp(int x) {
  if (x <= 0) return 1;
  if (memo[x] != -1) return memo[x];

  ll ret = dp(x-1);
  if (s[x] == 'u' && s[x-1] == 'u') ret += dp(x-2);
  else if (s[x] == 'n' && s[x-1] == 'n') ret += dp(x-2);

  return memo[x] = ret % m;
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  memset(memo, -1, sizeof memo);
  cin >> s;
  for (auto i : s) {
    if (i == 'w' || i == 'm') {
      cout << '0';
      return 0;
    }
  }
  cout << dp(s.size()-1);
  
  return 0;
}