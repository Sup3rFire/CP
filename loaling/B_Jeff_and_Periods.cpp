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
  
  int n;
  cin >> n;
  map<int, pii> a;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (a.count(x)) {
      if (a[x].se == 0) {
        a[x].se = i - a[x].fi;
      } else {
        if (i - a[x].fi != a[x].se) a[x].se = 1e9;
      }
      a[x].fi = i;
    } else {
      a[x] = {i, 0};
    }
  }
  
  vector<pii> b;
  for (auto &[x, y] : a) {
    if (y.se != 1e9) {
      b.pb({x, y.se});
    }
  }
  cout << b.size() << '\n';
  for (auto &[x, y] : b) {
    cout << x << " " << y << '\n';
  }

  return 0;
}