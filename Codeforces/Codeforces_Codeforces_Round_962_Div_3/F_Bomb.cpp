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
  int n, k;
  cin >> n >> k;
  pii a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i].fi;
  for (int i = 0; i < n; i++)
    cin >> a[i].se;

  int l = 0, r = 1e9+1;

  ll sum = 0;
  int amo = 0;
  while (l + 1 < r) {
    int mid = (l+r)/2;
    sum = amo = 0;
    for (auto i : a) {
      if (i.fi >= mid) {
        
      }
    }
    if (amo < k) r = mid;
    else l = mid;
  } 
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) loalisaverycuteegirl();
  
  return 0;
}