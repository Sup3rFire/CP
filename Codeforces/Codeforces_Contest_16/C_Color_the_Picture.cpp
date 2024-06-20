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
  
  int horiz = 0;
  bool horiz2 = 0;
  int verti = 0;
  bool verti2 = 0;

  for (int i = 0; i < k; i++) {
    int a;
    cin >> a;
    if (a/n > 1) horiz += a/n;
    if (a/n > 2) horiz2 = 1;
    if (a/m > 1) verti += a/m;
    if (a/m > 2) verti2 = 1;
  }
  
  if ((horiz >= m && (horiz2 || (m % 2 == 0))) || (verti >= n && (verti2 || (n % 2 == 0)))) cout << "Yes";
  else cout << "No";
  cout << '\n';
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) loalisaverycuteegirl();
  
  return 0;
}