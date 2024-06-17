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

void loalisaverycuteegirl() {
  int q;
  cin >> q;
  
  int am1 = 1, am2 = 1;
  bool na = false;
  bool can = false;

  while (q--) {
    int d, k; string s;
    cin >> d >> k >> s;
    if (d == 2) {
      am2 += s.size()*k;
      bool cn = false;
      for (auto i : s) {
        if (i != 'a') cn = true;
      }

      if (cn) can = true;
    } else {
      for (auto i : s) {
        if (i != 'a') na = true;
      }
      am1 += s.size()*k;
    }

    if (can || (am1 < am2 && !na)) cout << "YES\n";
    else cout << "NO\n";
  }
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) loalisaverycuteegirl();
  
  return 0;
}