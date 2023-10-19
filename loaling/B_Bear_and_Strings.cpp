#include <bits/stdc++.h>
using namespace std;

// loal is a cute girl

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
#define pll pair<long, long>
#define isvowel(x) (x) == 'a' || (x) == 'i' || (x) == 'u' || (x) == 'e' || (x) == 'o'

const ld EPS = 1e-9;
const ld PI = 3.141592653589793238462643383279502884197169399375105820974944;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  string s;
  cin >> s;
  vector<int> b;
  for (int i = 0; i+4 <= s.size(); i++) {
    if (s[i] == 'b' && s[i+1] == 'e' && s[i+2] == 'a' && s[i+3] == 'r') {
      b.pb(i);
    }
  }

  int x = 0;
  for (int i = 0; i+3 < s.size(); i++) {
    for (int j = i; j < s.size(); j++) {
      auto g = upper_bound(all(b), j+3);
      auto h = lower_bound(all(b), i);
      if (g == b.begin() || h == b.end()) continue;
      // cout << *h << " " << *prev(g) << endl;
      if (*h <= j-3 && *prev(g) >= i) x++;
    }
  }
  cout << x;
  return 0;
}