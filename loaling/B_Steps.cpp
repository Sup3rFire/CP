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

const ld EPS = 1e-9;
const ld PI = 3.141592653589793238462643383279502884197169399375105820974944;

ll n, m, x, y;

int main () {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  cin >> n >> m >> x >> y;
  int k;
  cin >> k;
  ll steps = 0;
  for (int i = 0; i < k; i++) {
    ll dx, dy;
    cin >> dx >> dy;
    ll maxsteps = 1e18;
    if (dx != 0) {
      if (dx < 0)
        maxsteps = min(maxsteps, (x-1)/abs(dx));
      else 
        maxsteps = min(maxsteps, (n-x)/dx);
    }
    if (dy != 0) {
      if (dy < 0)
        maxsteps = min(maxsteps, (y-1)/abs(dy));
      else 
        maxsteps = min(maxsteps, (m-y)/dy);
    }
    steps += maxsteps;
    x += dx*maxsteps;
    y += dy*maxsteps;
  }

  cout << steps << endl;
  
  return 0;
}