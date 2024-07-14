#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds;

// loal is the cutest girl

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
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> 

const ld EPS = 1e-9;
const ld PI = 3.141592653589793238462643383279502884197169399375105820974944;

const int maxn = 1005;
const int p = 1e9+7;
int n, k;

long long binpow(long long a, long long b, long long m = p) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

void loalisaverycuteegirl() {
  cin >> n >> k;
  int a[n];
  
  for (int i = 0; i < n; i++) cin >> a[i];
  sort(a, a+n, greater<int>());

  int mn = 1e9, mx = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] == a[k-1]) {
      mn = min(mn, i);
      mx = i;
    }
  }
  int amo = 0;
  for (int i = 0; i < k; i++) {
    if (a[i] == a[k-1]) {
      amo++;
    }
  }
  int cho = 1+mx-mn;

  ll ans = 1;
  for (int i = 1; i <= cho; i++) {
    ans *= i;
    ans %= p;
  }
  for (int i = 1; i <= amo; i++) {
    ans *= binpow(i, p-2);
    ans %= p;
  }
  for (int i = 1; i <= cho-amo; i++) {
    ans *= binpow(i, p-2);
    ans %= p;
  }
  cout << ans << '\n';
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) loalisaverycuteegirl();
  
  return 0;
}