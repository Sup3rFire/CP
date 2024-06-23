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

int n, k, a, b;
map<int, ll> memo;
ll dp(int x) {
  if (memo.count(x)) return memo[x];
  if (x == 1) return 0;
  
  if (x % k == 0) {
    int dest = x/k;
    return memo[x] = dp(dest)+min((x-dest)*a, b);
  } else {
    return memo[x] = dp(x-min(x-1, x%k))+min(x-1, x%k)*a;
  }
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  cin >> n >> k >> a >> b;

  if (k == 1) {
    cout << (n-1)*a;
  } else {
    cout << dp(n);
  }
  
  return 0;
}