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

const int maxn = 2005;
int n;
ll BIT[maxn];

void update(int idx, ll v) {
  for(int i = idx; i <= n; i += i & -i) BIT[i] += v;
}

int get(int idx) {
  ll sum = 0;
  for(int i = idx; i; i -= i & -i) sum += BIT[i];
  return sum;
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  cin >> n;
  pii a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i].fi;
    a[i].se = i+1;
  }
  sort(a, a+n, greater<pii>());
  
  int mx = 0;
  for (int i = 0; i < n; i++) {
    update(a[i].se, a[i].fi);
    bool possible = true;
    for (int i = 1; i <= n; i++) {
      if (get(i) < 0) possible = false;
    }
    if (possible) mx++;
    else update(a[i].se, -a[i].fi);
  }

  cout << mx;

  return 0;
}