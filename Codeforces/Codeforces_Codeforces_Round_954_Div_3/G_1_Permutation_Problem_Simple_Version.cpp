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

// const int MAX_N = 5e5+5;
// int max_div[MAX_N + 1];

void loalisaverycuteegirl() {
  int n;
  cin >> n;
  int a[n+1];
  set<int> divs[n+1];
  int divitself = 0;
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    int x;
    cin >> x;
    a[i] = x;
    for (int j = 1; j*j <= n; j++) {
      if (x % j == 0) {
        divs[i].insert(j);
        if (j*j != x) divs[i].insert(x/j);
      }
    }

    int mns = 0;
    for (auto j : divs[i]) {
      if (j >= i) {
        divs[j].insert(i);
      } else {
        if ((a[j]*a[i]) % (j*i) == 0) {
          cout << j << ' ' << i << '\n';
          if (a[j] % j == 0) mns++;
          ans++;
        }
      }
    }
    if (x % i == 0) {
      ans += divitself - mns;
      divitself++;
    }
  }
  cout << ans << '\n';
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
	// for (int i = 2; i <= MAX_N; i++) {
	// 	if (max_div[i] == 0) {
	// 		for (int j = i; j <= MAX_N; j += i) { max_div[j] = i; }
	// 	}
	// }

  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) loalisaverycuteegirl();
  
  return 0;
}