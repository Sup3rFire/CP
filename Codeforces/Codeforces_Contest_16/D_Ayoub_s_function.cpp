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
  int n, one;
  cin >> n >> one;
  int zero = n-one;

  int maxgap = (zero+one)/(one+1);

  ll ans = 0;
  ll amoabove = n-maxgap;
  ans += amoabove*(amoabove+1)/2;
  // cout << ans << ' ';

  int mingapsafe;
  // if (one >= zero) {
  //   if (one == n/2) mingapsafe = 2;
  //   else {
  //     mingapsafe = 1;
  //   }
  // } else {
  // }
  mingapsafe = (zero)/(one+1)+1;
  mingapsafe = min(mingapsafe, maxgap);
  ans += mingapsafe*(mingapsafe+1)/2*one;

  // cout << zero % (one+1) << ' ';

  cout << ans << '\n';
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) loalisaverycuteegirl();
  
  return 0;
}