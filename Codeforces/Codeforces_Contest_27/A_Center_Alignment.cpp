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

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  string x;
  string a[1005];
  int amo = 0;
  int mxsize = 0;
  while (getline(cin, x)) {
    a[amo] = x;
    mxsize = max(mxsize, (int)a[amo++].size());
  }

  for (int i = 0; i < mxsize+2; i++) cout << '*';
  cout << '\n';
  
  bool left = true;
  for (int idx = 0; idx < amo; idx++) {
    string i = a[idx];
    int leftover = mxsize-i.size();
    cout << '*';
    if ((leftover % 2 != 0) && !left) {
      cout << ' ';
    }
    for (int i = 0; i < leftover/2; i++) cout << ' ';
    cout << i;
    for (int j = 0; j < leftover/2; j++) {
      cout << ' '; 
    }
    if ((leftover % 2 != 0) && left) {
      cout << ' ';
    }
    if (leftover % 2 != 0)
      left = !left;
    cout << '*';
    cout << '\n';
  }

  for (int i = 0; i < mxsize+2; i++) cout << '*';
  
  return 0;
}