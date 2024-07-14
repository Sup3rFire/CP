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

void loalisaverycuteegirl() {
  ll n;
  cin >> n;
  ll on = n;
  
  pll mx = {0, 0};
  for (ll i = 2; i*i <= n; i++) {
    ll div = 0;
    while (n % i == 0) {
      div++;
      n /= i;
    }
    mx = max(mx, {div, i});
  }

  if (n != 1)
    mx = max(mx, {1, n});

  vector<ll> ans;

  for (ll i = 1; i < mx.fi; i++) {
    ans.pb(mx.se);
    on /= mx.se;
  }
  ans.pb(on);

  cout << ans.size() << '\n';
  for (auto i : ans) cout << i << ' ';
  cout << '\n';
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) loalisaverycuteegirl();
  
  return 0;
}