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

int main () {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int l, r, ambi;
  cin >> l >> r >> ambi;
  int mi = min(l, r), ma = max(l, r);
  if (ambi <= ma-mi) {
    cout << (mi+ambi)*2 << endl;
  } else {
    int diff = ma-mi;
    ambi -= diff;
    mi += diff;
    cout << ma+mi+ambi/2*2 << endl;
  }
  
  return 0;
}