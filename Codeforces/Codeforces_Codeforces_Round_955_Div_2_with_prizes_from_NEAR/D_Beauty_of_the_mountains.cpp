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

void loalisaverycuteegirl() {
  int n, m, k;
  cin >> n >> m >> k;

  int a[n+1][m+1];
  bool type[n+1][m+1];
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> a[i][j];
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      char x;
      cin >> x;
      type[i][j] = x == '1';
    }
  }

  int sum[2] = {0, 0};
  
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      sum[type[i][j]] += a[i][j];
    }
  }
  int diff = abs(sum[0]-sum[1]);

  if (diff == 0) {
    cout << "YES\n";
    return;
  }

  int pref[n+1][m+1];
  for (int i = 0; i <= n; i++) pref[i][0] = 0;
  for (int i = 0; i <= m; i++) pref[0][i] = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      int curr = type[i][j] ? 1 : -1;
      pref[i][j] = pref[i-1][j]+pref[i][j-1]-pref[i-1][j-1]+curr;
    }
  }

  int gcdstart = 0;
  for (int i = 1; i <= n-k+1; i++)
    for (int j = 1; j <= m-k+1; j++) {
      int now = pref[i+k-1][j+k-1]-pref[i+k-1][j-1]-pref[i-1][j+k-1]+pref[i-1][j-1];
      if (now == 0) continue;
      if (gcdstart == 0) gcdstart = now;
      else gcdstart = __gcd(gcdstart, abs(now));
    }
  if (gcdstart != 0 && diff % abs(gcdstart) == 0) {
    cout << "YES\n";
  } else{
    cout << "NO\n";
  }
  return;
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) loalisaverycuteegirl();
  
  return 0;
}