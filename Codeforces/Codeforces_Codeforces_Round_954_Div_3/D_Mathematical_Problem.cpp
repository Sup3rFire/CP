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

int n;
string s;
// int memo[25][25];
// int fnd(int idx, int cut) {
//   if (idx == n) return 0;
//   if (memo[idx][cut] != -1) return memo[idx][cut];

//   int ret = s[idx]-'0';
//   if (cut == idx) {
//     ret *= 10;
//     ret += s[idx+1]-'0';
//     if (ret == 1) ret = fnd(idx+2, cut) * 1;
//     else ret += fnd(idx+2, cut);
//   } else {
//     if (ret == 1) ret = 0;
//     ret += fnd(idx+1, cut);
//   }

//   return memo[idx][cut] = ret;
// }

void loalisaverycuteegirl() {
  cin >> n >> s;

  int mn = 1e9;
  for (int i = 0; i < n-1; i++) {
    int curr = 0;
    bool has0 = false;
    for (int j = 0; j < n; j++) {
      int x = s[j]-'0';

      if (i == j) {
        j++;
        x *= 10;
        x += s[j]-'0';
      }

      if (x == 0) has0 = true;
      else if (x == 1) {
      }
      else curr += x;
    }
    if (has0) mn = 0;
    else mn = min(mn, max(curr, 1));
  }

  cout << mn << '\n';
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) loalisaverycuteegirl();
  
  return 0;
}