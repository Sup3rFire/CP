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

const ld EPS = 1e-9;
const ld PI = 3.141592653589793238462643383279502884197169399375105820974944;

const int p = 1e9+7;

long long binpow(long long a, long long b) {
  a %= p;
  long long res = 1;
  while (b > 0) {
    if (b & 1)
      res = res * a % p;
    a = a * a % p;
    b >>= 1;
  }
  return res;
}

void loalisaverycuteegirl() {
  int n, k;
  cin >> n >> k;
  int eq;
  if (n&1) eq = (binpow(2, n-1)+1)%p;
  else eq = (binpow(2, n-1)-1+p)%p;

  int p2 = binpow(2, n);

  pii prev = {1, 0};
  for (int i = 0; i < k; i++) {
    pii now;
    if (n&1) {
      now.se = prev.se*p2%p;
    } else {
      now.se = (prev.se*p2%p + prev.fi) % p;
    } 
    now.fi = (prev.fi*eq)%p;
    prev = now;
  }
  cout << (prev.fi+prev.se)%p << '\n';
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) loalisaverycuteegirl();
  
  return 0;
}