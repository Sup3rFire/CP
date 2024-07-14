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

map<pii, ld> memo;

int i = 0;
ld dp(int a, int b) { 
  int oa = a, ob = b;
  if (a <= 0) return 0;
  if (b <= 0) return 1;
  if (memo.count({a, b})) return memo[{a, b}];
  ld ret = (ld)a/(a+b);
  
  ld nxt = pow2((ld)b/(a+b--));
  if (nxt > 0) {
    if (b > 0) {
      ret += nxt * ((ld)b/(a+b))*dp(a, b-1);
    }
    ret += nxt * ((ld)a/(a+b))*dp(a-1, b);
  }

  return memo[{oa, ob}] = ret;
} 

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int a, b;
  cin >> a >> b;

  cout << fixed << setprecision(20) << dp(a, b);

  return 0;
}