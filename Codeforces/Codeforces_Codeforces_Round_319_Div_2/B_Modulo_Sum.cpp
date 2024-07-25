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

const int maxn = (1e3+1);
char memo[maxn*maxn/4];
int n, m;
short a[maxn];
bool dp(short x, short q) {
  if (q == 0) return true;
  if (x < 0) return false;
  #define id (x+q*n)
  #define memoaddress memo[id/4]
  #define memosubaddr ((id%4)<<1)
  if (memoaddress & (1 << memosubaddr)) return memoaddress & (1 << (memosubaddr+1));
  memoaddress |= 1 << memosubaddr;
  if (dp(x-1, (q+a[x])%m) || dp(x-1, q)) memoaddress |= 1 << (memosubaddr + 1);

  return memoaddress & (1 << (memosubaddr+1));
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

  cin >> n >> m;
  if (n >= m) {cout << "YES"; return 0; }
  int x;
  for (short i = 0; i < n; i++) {
    cin >> x;
    a[i] = x % m;
  }

  cout << (dp(n-1, m) ? "YES" : "NO");

  return 0;
}