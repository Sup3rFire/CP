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

  vector<int> a;
  for (int i = 1; i <= 9; i++) {
    for (int j = 1; j <= 9; j++) {
      int num = 0; int mult = 1;
      for (int k = 0; k < i; k++) {
        num += j * mult;
        mult *= 10;
      }
      a.pb(num);
    }
  }
  
  int n;
  cin >> n;
  while (n--) {
    int x;
    cin >> x;
    cout << upper_bound(all(a), x)-a.begin() << '\n';
  }
  
  return 0;
}