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

const int maxn = 1e5+5;
int memo[maxn];
int tme[maxn];
int curtime = 0;

int n, l, r;
int pref[maxn];

int dp(int idx) {
  if (idx > n) return 0;
  if (tme[idx] == curtime) return memo[idx];
  tme[idx] = curtime;

  int ret = dp(idx+1);

  auto optimal = lower_bound(pref+1, pref+1+n, pref[idx-1]+l);

  if (optimal-pref <= n) {
    if (*optimal-pref[idx-1] <= r) {
      ret = max(ret, dp(optimal-pref+1)+1);
    }
  }

  return memo[idx] = ret;
}

void loalisaverycuteegirl() {
  curtime++;
  
  cin >> n >> l >> r;
  for (int i = 1; i <= n; i++) {
    int x;
    cin >> x;
    pref[i] = pref[i-1]+x;
  }

  cout << dp(1) << '\n';
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) loalisaverycuteegirl();
  
  return 0;
}