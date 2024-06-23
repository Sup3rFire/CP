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

const int maxn = 2e5+5;
int a[maxn];
struct stree {
  int sum;
  int max;
  int min;
} t[4*maxn];

stree combine(stree a, stree b) {
  return stree {
    sum: a.sum + b.sum,
    max: max(a.max, a.sum+b.max),
    min: min(a.min, a.sum+b.min),
  };
}

void build(int v, int tl, int tr) {
  if (tl == tr) {
    t[v].max = t[v].min = t[v].sum = a[tl];
    t[v].max = max(t[v].max, 0);
    t[v].min = min(t[v].min, 0);
  } else {
    int tm = (tl + tr) / 2;
    build(v*2, tl, tm);
    build(v*2+1, tm+1, tr);
    t[v] = combine(t[v*2], t[v*2+1]);
  }
}

stree get_max(int v, int tl, int tr, int l, int r) {
  if (l > r)
    return stree {sum: 0, max: 0, min: 0};
  if (l == tl && r == tr)
    return t[v];
  int tm = (tl + tr) / 2;
  return combine(get_max(v*2, tl, tm, l, min(r, tm)), 
                 get_max(v*2+1, tm+1, tr, max(l, tm+1), r));
}

void loalisaverycuteegirl() {
  int n, m;
  cin >> n >> m;

  for (int i = 1; i <= n; i++) {
    char x;
    cin >> x;
    a[i] = x == '+' ? 1 : -1;
  }

  build(1, 1, n);

  while (m--) {
    int l, r;
    cin >> l >> r;
    stree ans = combine(get_max(1, 1, n, 1, l-1), get_max(1, 1, n, r+1, n));
    cout << ans.max-ans.min+1 << '\n';
    // cout << ans.max << ' ' << ans.min << '\n';
  }
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) loalisaverycuteegirl();
  
  return 0;
}