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
int sz[maxn];
int a[maxn];

int srch(int cur, int find, int thr) {
  if (cur == find) return sz[cur] = thr;
  return sz[cur] = srch(a[cur], find, thr+1);
}

void loalisaverycuteegirl() {
  int n;
  cin >> n;

  fill(sz, sz+n+3, -1);

  for (int i = 1; i <= n; i++) cin >> a[i];

  for (int i = 1; i <= n; i++) {
    if (sz[i] != -1) cout << sz[i] << ' ';
    else cout << srch(a[i], i, 1) << ' ';
  }
  cout << '\n';
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) loalisaverycuteegirl();
  
  return 0;
}