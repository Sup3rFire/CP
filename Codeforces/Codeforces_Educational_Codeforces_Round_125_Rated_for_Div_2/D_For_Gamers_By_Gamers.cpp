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

int a[(ll)1e6+5];

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int n, C;
  cin >> n >> C;

  for (int i = 0; i < n; i++) {
    int c, x, y;

    cin >> c >> x >> y;
    a[c] = max(a[c], x*y);
  }

  for (int i = 1; i <= 1e6; i++) {
    for (int j = i; j <= 1e6; j += i) {
      a[j] = max(a[j], a[i]*j/i);
    }
  }
  for (int i = 2; i <= 1e6; i++) {
    a[i] = max(a[i], a[i-1]);
  }

  int m;
  cin >> m;
  while (m--) {
    int h, c;
    cin >> h >> c;
    int idx = upper_bound(a+1, a+(ll)1e6+1, h*c)-a;
    if (idx > C) cout << "-1 ";
    else cout << idx << ' ';
  }
  
  return 0;
}