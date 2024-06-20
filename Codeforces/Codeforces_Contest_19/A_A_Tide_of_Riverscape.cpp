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
  
  int n, m;
  cin >> n >> m;
  string s;
  cin >> s;
  bool possible = false;
  for (int i = 0; i < n-m; i++) {
    if (s[i] == '.' || s[i+m] == '.') possible = true;
    if (s[i] != s[i+m]) possible = true;
    if (s[i] == '.') s[i] = (s[i+m] == '1' ? '0' : '1');
  }
  for (int i = n-m; i < n; i++) {
    if (s[i] == '.') s[i] = (s[i-m] == '1' ? '0' : '1');
  }

  if (possible) cout << s;
  else cout << "No";
  
  return 0;
}