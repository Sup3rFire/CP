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
  int n;
  cin >> n;
  vector<int> even, odd;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x & 1) odd.pb(x);
    else even.pb(x);
  }

  while (even.size() > 1) {
    int a = even.end()[-1], b = even.end()[-2];
    even.pop_back();
    even.pop_back();
    int nw = (a+b)>>1;
    if (nw & 1) odd.pb(nw);
    else even.pb(nw);
  }

  while (odd.size() > 1) {
    int a = odd.end()[-1], b = odd.end()[-2];
    odd.pop_back();
    odd.pop_back();
    int nw = (a+b)>>1;
    if (nw & 1) odd.pb(nw);
    else even.pb(nw);

    while (even.size() > 1) {
      int a = even.end()[-1], b = even.end()[-2];
      even.pop_back();
      even.pop_back();
      int nw = (a+b)>>1;
      if (nw & 1) odd.pb(nw);
      else even.pb(nw);
    }
  }
  if (odd.size() > 0 && even.size() > 0) cout << ((odd[0]+even[0])>>1) << '\n';
  else if (odd.size() > 0) cout << odd[0] << '\n';
  else cout << even[0] << '\n';
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) loalisaverycuteegirl();
  
  return 0;
}