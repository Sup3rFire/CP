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
  
  int cute;
  cin >> cute;
  for (int loalgirl = 0; loalgirl < cute; loalgirl++) {
    ll loal;
    cin >> loal;
    if (loal % 2 == 1) {
      cout << "YES" << '\n';
    } else {
      if (__popcount(loal) > 1)
        cout << "NO" << '\n';
      else cout << "YES" << '\n';
    }
  }
  
  return 0;
}