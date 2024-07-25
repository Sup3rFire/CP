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

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int n;
  cin >> n;
  
  int ans = 0;
  int c5 = 1;
  for (int i = 0; i < 5; i++) {
    c5 *= n-i;
  }
  for (int i = 2; i <= 5; i++) c5 /= i;
  
  ans += c5;

  int c6 = 1;
  for (int i = 0; i < 6; i++) {
    c6 *= n-i;
  }
  for (int i = 2; i <= 6; i++) c6 /= i;
  ans += c6;
  
  ans += c6*(n-6)/7;

  cout << ans << '\n';

  return 0;
}