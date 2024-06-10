#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds;

// loal is the cutest girl

#define ll long long
#define int ll
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
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> 
#define popcount __builtin_popcountll

const ld EPS = 1e-9;
const ld PI = 3.141592653589793238462643383279502884197169399375105820974944;

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  ll a, b, c;
  cin >> a >> b >> c;

  if (popcount(c) > a+b || popcount(c) % 2 != (a+b)%2) {
    cout << -1;
    return 0;
  }
  
  ll num1 = 0, num2 = 0;
  if (max(a, b) - min(a, b) > popcount(c)) {
    cout << -1;
    return 0;
  }

  for (int i = 0; i < 60; i++) {
    if (c & (1LL << i)) {
      c -= c & -c;
      if (a > b) {
        a--;
        num1 |= (1LL << i);
      } else {
        b--;
        num2 |= (1LL << i);
      }
    } else {
      if (a > 0 && b > 0 && a+b > popcount(c)) {
        a--;
        b--;
        num1 |= (1LL << i);
        num2 |= (1LL << i);
      }
    }
  }

  if (a > 0 || b > 0) {
    cout << -1;
    return 0;
  }

  cout << num1 << ' ' << num2;

  return 0;
}