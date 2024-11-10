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

const int maxn = 2e5+5;
const int p = 1e9+7;
int fact[maxn];
int inv[maxn];

int binexpo(int a, int b) {
  if (b == 0) return 1;
  int ret = pow2(binexpo(a, b/2))%p;
  if (b & 1) ret = ret * a % p;
  return ret;
}
long long choose(long long n, long long r) {
	return fact[n] * inv[r] % p * inv[n - r] % p;
}

void loalisaverycuteegirl() {
  int n, k;
  cin >> n >> k;
  int n1 = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    n1 += x;
  }
  int ans = 0;
  for (int i = (k+1)/2; i <= k; i++) {
    int x = 1;
    if (i <= n1) x *= choose(n1, i);
    else x = 0;
    if (k-i <= n-n1) x *= choose(n-n1, k-i);
    else x = 0;

    x %= p;
    ans += x;
    ans %= p;
  }
  cout << ans << '\n';
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  fact[0] = 1;
  for (int i = 1; i < maxn; i++) fact[i] = fact[i-1]*i%p;
  inv[maxn-1] = binexpo(fact[maxn-1], p-2);
  for (int i = maxn-2; i >= 0; i--) inv[i] = inv[i+1]*(i+1)%p;
  
  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) loalisaverycuteegirl();
  
  return 0;
}