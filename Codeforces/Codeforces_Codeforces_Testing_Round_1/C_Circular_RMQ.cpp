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

// const int maxn = 5;
const int maxn = 2e5+5;
ll a[maxn];
ll stree[2*maxn];
ll lazy[2*maxn];

#define mid (l+r)/2
#define lc nd+1
#define rc nd+2*(mid-l+1)

void checklazy(int nd, int l, int r) {
  lazy[lc] += lazy[nd];
  lazy[rc] += lazy[nd];
  stree[lc] += lazy[nd];
  stree[rc] += lazy[nd];
  lazy[nd] = 0;
}

void build(int nd, int l, int r) {
  lazy[nd] = 0;
  if (l == r) {
    stree[nd] = a[l];
    return;
  }

  build(lc, l, mid);
  build(rc, mid+1, r);
  stree[nd] = min(stree[lc], stree[rc]);
}

ll query(int nd, int l, int r, int ql, int qr) {
  if (ql <= l && r <= qr) {
    return stree[nd];
  }

  checklazy(nd, l, r);

  if (ql > mid) return query(rc, mid+1, r, ql, qr);
  else if (qr <= mid) return query(lc, l, mid, ql, qr);
  else return min(query(rc, mid+1, r, ql, qr), query(lc, l, mid, ql, qr));
}

void update(int nd, int l, int r, int ql, int qr, int v) {
  if (ql <= l && r <= qr) {
    stree[nd] += v;
    lazy[nd] += v;
    return;
  }

  checklazy(nd, l, r);

  if (qr > mid) update(rc, mid+1, r, ql, qr, v);
  if (ql <= mid) update(lc, l, mid, ql, qr, v);
  stree[nd] = min(stree[lc], stree[rc]);
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) cin >> a[i];
  build(1, 1, n);

  int m;
  cin >> m;
  string s;
  getline(cin, s);
  while (m--) {
    getline(cin, s);
    stringstream in(s);
    int l, r, v;
    in >> l >> r;
    l++; r++;
    if (in >> v) {
      if (l > r) {
        update(1, 1, n, l, n, v);
        update(1, 1, n, 1, r, v);
      } else {
        update(1, 1, n, l, r, v);
      }
    } else {
      if (l > r) {
        cout << min(query(1, 1, n, 1, r), query(1, 1, n, l, n)) << '\n';
      } else {
        cout << query(1, 1, n, l, r) << '\n';
      }
    }
  }
  
  return 0;
}