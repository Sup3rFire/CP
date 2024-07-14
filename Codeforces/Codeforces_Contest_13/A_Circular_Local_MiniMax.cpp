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

void loalisaverycuteegirl() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a+n);
  int ans[n];
  int pl = 0, pr = n/2;
  for (int i = 0; i < n; i++) {
    if (i & 1) ans[i] = a[pr++];
    else ans[i] = a[pl++];
  }
  for (int i = 0; i < n; i++) {
    int prev = ans[(i+n-1)%n];
    int nxt = ans[(i+1)%n];
    if (prev > ans[i] && nxt > ans[i]) {

    } else if (prev < ans[i] && nxt < ans[i]) {

    } else {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
  for (auto i : ans) cout << i << ' ';
  cout << '\n';
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) loalisaverycuteegirl();
  
  return 0;
}