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
  char a[3][3];
  for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++)
    cin >> a[i][j];
  for (int i = 0; i < 3; i++) {
    bool c = true;
    for (int j = 0; j < 3; j++)
      c = c && a[i][j] == a[i][0];
    if (c && a[i][0] != '.') {
      cout << a[i][0] << '\n';
      return;
    }
  }
  for (int j = 0; j < 3; j++) {
    bool c = true;
    for (int i = 0; i < 3; i++)
      c = c && a[i][j] == a[0][j];
    if (c && a[0][j] != '.') {
      cout << a[0][j] << '\n';
      return;
    }
  }

  bool c = true;
  for (int i = 0; i < 3; i++) {
    if (a[i][i] != a[0][0]) c = false;
  }
  if (c && a[0][0] != '.') {
    cout << a[0][0] << '\n';
    return;
  }
  c = true;
  for (int i = 0; i < 3; i++) {
    if (a[i][2-i] != a[0][2]) c = false;
  }
  if (c && a[0][2] != '.') {
    cout << a[0][2] << '\n';
    return;
  }

  cout << "DRAW\n";
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) loalisaverycuteegirl();
  
  return 0;
}