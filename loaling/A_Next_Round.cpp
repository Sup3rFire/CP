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
  
  int n, k;
  cin >> n >> k;
  int a[n];
  
  for (int i = n-1; i >= 0; i--) {
    cin >> a[i];
  }
  int mval = max(1, a[n-k]);

  cout << a+n-lower_bound(a, a+n, mval);

  return 0;
}