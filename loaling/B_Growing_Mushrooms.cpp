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
  
  int n, t1, t2, k;
  cin >> n >> t1 >> t2 >> k;

  cout << fixed << setprecision(2);

  pair<ld, int> vals[n];
  for (int i = 1; i <= n; i++) {
    int a, b;
    cin >> a >> b;
    // if (a > b) {
    //   int temp = a;
    //   a = b;
    //   b = temp;
    // }
    
    vals[i-1].fi = max((ld)a*t1*((ld)(100-k)/100) + b*t2, (ld)b*t1*((ld)(100-k)/100) + a*t2);
    vals[i-1].se = n-i;
  }

  sort(vals, vals+n);
  reverse(vals, vals+n);
  for (int i = 0; i < n; i++) cout << n-vals[i].se << " " << vals[i].fi << endl;
  
  return 0;
}