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
  
  int n, k;
  cin >> n >> k;

  int a[n+1];
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  pii ans = {1005, 1005};
  for (int i = 1; i <= n; i++) {
    int amo = 0;
    bool can = true;
    for (int j = 1; j <= n; j++) {
      int needed = a[i]+k*(j-i);
      if (a[j] != needed) amo++;
      if (needed < 1) can = false;
    }
    if (can)
      ans = min(ans, {amo, i});
  }

  vector<pair<char, pii>> x;
  for (int j = 1; j <= n; j++) {
    int needed = a[ans.se]+k*(j-ans.se);
    if (a[j] != needed) {
      int add = needed-a[j];
      char op = add > 0 ? '+' : '-';
      x.pb({
        op,
        {j, abs(add)}
      });
    }
  }
  cout << x.size() << '\n';
  for (auto i : x) cout << i.fi << ' ' << i.se.fi << ' ' << i.se.se << '\n';
  return 0;
}