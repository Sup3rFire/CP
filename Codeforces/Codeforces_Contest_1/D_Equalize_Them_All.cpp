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
  
  int n;
  cin >> n;
  int a[n];
  map<int, pii> amo;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    amo[a[i]].fi++;
    amo[a[i]].se = i;
  }

  pii mx = {0, 0};
  int num = -1;
  for (auto i : amo) {
    if (i.se.fi > mx.fi) {mx = i.se; num = i.fi;}
  }

  cout << n-mx.fi << '\n';
  for (int i = mx.se+1; i < n; i++) {
    if (a[i] > num) {
      cout << "2 " << i+1 << ' ' << i << '\n';
    } else {
      cout << "1 " << i+1 << ' ' << i << '\n';
    }
  }
  for (int i = mx.se-1; i >= 0; i--) {
    if (a[i] == num) continue;
    else if (a[i] > num) {
      cout << "2 " << i+1 << ' ' << i+2 << '\n';
    } else {
      cout << "1 " << i+1 << ' ' << i+2 << '\n';
    }
  }

  return 0;
}