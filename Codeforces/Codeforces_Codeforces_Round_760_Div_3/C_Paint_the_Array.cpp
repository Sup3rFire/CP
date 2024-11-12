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
  int n;
  cin >> n;
  int a[n];
  for (auto &i : a) cin >> i;
  int gcda = a[0];
  for (int i = 0; i < n; i += 2) {
    gcda = __gcd(gcda, a[i]);
  }
  int gcdb = a[1];
  for (int i = 1; i < n; i += 2) {
    gcdb = __gcd(gcdb, a[i]);
    if (gcda && a[i] % gcda == 0) gcda = 0;
  }
  
  for (int i = 0; i < n; i += 2) {
    if (gcdb && a[i] % gcdb == 0) gcdb = 0;
  }

  if (gcda) cout << gcda;
  else cout << gcdb;
  cout << '\n';
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) loalisaverycuteegirl();
  
  return 0;
}