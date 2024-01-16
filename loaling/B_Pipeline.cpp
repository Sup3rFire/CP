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
  
  ll n, k;
  cin >> n >> k;
  n--;
  ll l = 0, r = k;
  bool possible = false;
  while (l < r) {
    ll mid = (l+r)/2;

    ll res = (((k-1)+(k-mid))*mid)/2;

    if (res > n) {
      r = mid;
      possible = true;
    } else if (res < n) {
      l = mid+1;
    } else {
      possible = true;
      l = mid;
      r = mid;
    }
  }

  if (possible)
    cout << l;
  else cout << -1;

  return 0;
}