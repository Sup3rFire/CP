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
  
  string s;
  cin >> s;
  int l = 0, r = s.size()-1;
  string a = "";
  while (l+1 < r-1) {
    if (s[l] == s[r]) {
      a.pb(s[l]);
      l++;
      r--;
    } else if (s[l] == s[r-1]) {
      a.pb(s[l]);
      l++;
      r -= 2;
    } else {
      a.pb(s[l+1]);
      l += 2;
      if (s[l+1] == s[r]) r--;
      else r -= 2;
    }
  }
  cout << a;
  if (r >= l) cout << s[l];
  for (auto i = a.rbegin(); i != a.rend(); i++) cout << *i;
  return 0;
}