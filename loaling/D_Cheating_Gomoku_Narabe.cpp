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
  
  int h, w, k;
  cin >> h >> w >> k;
  char a[h][w];
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> a[i][j];
    }
  }
  
  int mval = 1e9;
  if (k <= w) {
    for (int i = 0; i < h; i++) {
      int x = 0, o = 0;
      for (int j = 0; j < k; j++) {
        if (a[i][j] == 'x') x++;
        else if (a[i][j] == 'o') o++;
      }
      if (x == 0) {
        mval = min(mval, k-x-o);
      }
      for (int j = k; j < w; j++) {
        if (a[i][j] == 'x') x++;
        else if (a[i][j] == 'o') o++;
        if (a[i][j-k] == 'x') x--;
        else if (a[i][j-k] == 'o') o--;
        if (x == 0) {
          mval = min(mval, k-x-o);
        }
      }
    }
  }
  if (k <= h) {
    for (int j = 0; j < w; j++) {
      int x = 0, o = 0;
      for (int i = 0; i < k; i++) {
        if (a[i][j] == 'x') x++;
        else if (a[i][j] == 'o') o++;
      }
      if (x == 0) {
        mval = min(mval, k-x-o);
      }
      for (int i = k; i < h; i++) {
        if (a[i][j] == 'x') x++;
        else if (a[i][j] == 'o') o++;
        if (a[i-k][j] == 'x') x--;
        else if (a[i-k][j] == 'o') o--;
        if (x == 0) {
          mval = min(mval, k-x-o);
        }
      }
    }
  }

  if (mval != 1e9) cout << mval;
  else cout << -1;

  return 0;
}