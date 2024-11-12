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

int cback(char x) {
  if (x == 'S') return 0;
  else if (x == 'M') return 1;
  else if (x == 'L') return 2;
}

void loalisaverycuteegirl() {
  string a, b;
  cin >> a >> b;
  if (a == b) cout << "=\n";
  else {
    if (a.back() == b.back()) {
      if (a.back() == 'S') {
        if (a.size() > b.size()) cout << "<\n";
        else cout << ">\n";
      } else {
        if (a.size() < b.size()) cout << "<\n";
        else cout << ">\n";
      }
    } else {
      if (cback(a.back()) < cback(b.back())) cout << "<\n";
      else cout << ">\n";
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