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
#define pll pair<long long, long long>
#define isvowel(x) (x) == 'a' || (x) == 'i' || (x) == 'u' || (x) == 'e' || (x) == 'o'

const ld EPS = 1e-9;
const ld PI = 3.141592653589793238462643383279502884197169399375105820974944;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int n, l, r, x;
  cin >> n >> l >> r >> x;
  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];

  int valid = 0;
  for (int mask = 0; mask < 1 << n; mask++) {
    int total = 0;
    int minval = 1e9;
    int maxval = -1;
    for (int i = 0; i < n; i++) {
      if ((mask & 1 << i) != 0) {
        maxval = max(maxval, a[i]);
        minval = min(minval, a[i]);
        total += a[i];
      }
    }
    if (total >= l && total <= r && maxval-minval >= x) valid++;
  }
  cout << valid;
  return 0;
}