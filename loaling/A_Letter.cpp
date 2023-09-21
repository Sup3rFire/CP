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
  
  int n, m;
  cin >> n >> m;
  char a[n][m];
  int l = 90, r = -1, u = 90, d = -1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
      if (a[i][j] == '*') {
        l = min(l, j);
        r = max(r, j);
        u = min(u, i);
        d = max(d, i);
      }
    }
  }
  for (int i = u; i <= d; i++) {
    for (int j = l; j <= r; j++) {
      cout << a[i][j];
    }
    cout << endl;
  }
  return 0;
}