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

  int all[6] = {4, 8, 15, 16, 23, 42};

  int a[6];
  cout << "? 1 2" << endl;
  int x;
  cin >> x;

  pii f1;
  for (int i = 0; i < 6; i++) {
    for (int j = i+1; j < 6; j++) {
      if (all[i]*all[j] == x) f1 = {all[i], all[j]};
    }
  }
  
  cout << "? 3 4" << endl;
  cin >> x;

  pii f2;
  for (int i = 0; i < 6; i++) {
    for (int j = i+1; j < 6; j++) {
      if (all[i]*all[j] == x) f2 = {all[i], all[j]};
    }
  }

  cout << "? 1 5" << endl;
  cin >> x;

  pii f3;
  for (int i = 0; i < 6; i++) {
    for (int j = i+1; j < 6; j++) {
      if (all[i]*all[j] == x) f3 = {all[i], all[j]};
    }
  }
  cout << "? 3 6" << endl;
  cin >> x;

  pii f4;
  for (int i = 0; i < 6; i++) {
    for (int j = i+1; j < 6; j++) {
      if (all[i]*all[j] == x) f4 = {all[i], all[j]};
    }
  }

  int ans[6];
  if (f3.fi == f1.fi || f3.fi == f1.se) {
    ans[0] = f3.fi;
    ans[4] = f3.se;
    if (f3.fi == f1.fi) ans[1] = f1.se;
    else ans[1] = f1.fi;
  } else {
    ans[0] = f3.se;
    ans[4] = f3.fi;
    if (f3.se == f1.fi) ans[1] = f1.se;
    else ans[1] = f1.fi;
  }
  if (f4.fi == f2.fi || f4.fi == f2.se) {
    ans[2] = f4.fi;
    ans[5] = f4.se;
    if (f4.fi == f2.fi) ans[3] = f2.se;
    else ans[3] = f2.fi;
  } else {
    ans[2] = f4.se;
    ans[5] = f4.fi;
    if (f4.se == f2.fi) ans[3] = f2.se;
    else ans[3] = f2.fi;
  }

  cout << "!";
  for (auto i : ans) cout << ' ' << i;
  cout << endl;

  return 0;
}