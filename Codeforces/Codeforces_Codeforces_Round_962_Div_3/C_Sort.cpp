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
  int n, q;
  cin >> n >> q;
  string a, b;
  cin >> a >> b;
  int xa[n+1][26];
  int xb[n+1][26];
  
  for (int i = 0; i < 26; i++) xa[0][i] = xb[0][i] = 0;

  for (int c = 0; c < n; c++) {
    for (int i = 0; i < 26; i++) {xa[c+1][i] = xa[c][i] + (a[c]-'a' == i); xb[c+1][i] = xb[c][i] + (b[c]-'a' == i);}
  }

  while (q--) {
    int l, r;
    cin >> l >> r;
    int diff = 0;
    for (int i = 0; i < 26; i++) {
      diff += abs(xa[r][i]-xa[l-1][i]-(xb[r][i]-xb[l-1][i]));
    }
    cout << diff/2 << '\n';
  }
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) loalisaverycuteegirl();
  
  return 0;
}