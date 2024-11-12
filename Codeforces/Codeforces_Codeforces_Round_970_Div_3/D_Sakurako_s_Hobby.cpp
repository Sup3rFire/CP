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

const int maxn = 2e5+5;
int a[maxn];
string s;
int ans[maxn];
int srch(int x, int par, int acc = 0) {
  if (a[x] == par) return ans[x] = acc+(s[x-1] == '0');

  return ans[x] = srch(a[x], par, acc+(s[x-1] == '0'));
}

void loalisaverycuteegirl() {
  int n;
  cin >> n;
  fill(ans, ans+n+5, -1);
  for (int i = 1; i <= n; i++) cin >> a[i];
  cin >> s;

  for (int i = 1; i <= n; i++) {
    if (ans[i] != -1) cout << ans[i] << ' ';
    else cout << srch(i, i) << ' ';
  }
  cout << '\n';
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) loalisaverycuteegirl();
  
  return 0;
}