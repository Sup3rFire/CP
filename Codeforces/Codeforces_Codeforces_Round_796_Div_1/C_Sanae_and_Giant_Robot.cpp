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

const int maxn = 2e5+5;
char memo[maxn];
int n, m;
int a[maxn];
int b[maxn];
pii seg[maxn];
bool dp(int x) {
  if (x >= n) return 1;
  if (memo[x] != -1) return memo[x];
  bool ret = false;
  if (a[x] == b[x]) ret |= dp(x+1);
  return memo[x] = ret;
}

void loalisaverycuteegirl() {
  cin >> n >> m;
  fill(memo, memo+n, -1);
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < n; i++) cin >> b[i];
  for (int i = 0; i < m; i++) {
    int l, r;
    cin >> l >> r;
    seg[i] = {--l, --r};
  }
  cout << (dp(0) ? "YES" : "NO") << '\n';
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) loalisaverycuteegirl();
  
  return 0;
}