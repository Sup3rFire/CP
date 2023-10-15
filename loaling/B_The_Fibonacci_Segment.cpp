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
  if (n <= 2) {cout << n; return 0;}
  int a[n];
  cin >> a[0] >> a[1];
  int cnt = 2;
  int maxcnt = cnt;
  for (int i = 2; i < n; i++) {
    cin >> a[i];
    if (a[i-2]+a[i-1] == a[i]) {
      maxcnt = max(maxcnt, ++cnt);
    } else {
      cnt = 2;
    }
  }

  cout << maxcnt;
  
  return 0;
}