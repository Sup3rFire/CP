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
  int a[n];
  for (auto &i : a) cin >> i;
  int m;
  cin >> m;
  while (m--) {
    int b[26];
    fill(b, b+26, -2e9);
    string s;
    cin >> s;
    if (s.size() != n) cout << "NO\n";
    else {
      bool c = true;
      for (int i = 0; i < n; i++) {
        if (b[s[i]-'a'] == -2e9) { 
          for (auto d : b) if (d == a[i]) { c = false; break; }
          b[s[i]-'a'] = a[i]; 
        }
        else if (b[s[i]-'a'] != a[i]) {
          c = false;
          break;
        }
      }
      cout << (c ? "YES\n" : "NO\n");
    }
  }
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) loalisaverycuteegirl();
  
  return 0;
}