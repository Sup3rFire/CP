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

#define mid ((l+r)/2)
#define lc (pos+1)
#define rc (pos+2*(mid-l+1))

const ld EPS = 1e-9;
const ld PI = 3.141592653589793238462643383279502884197169399375105820974944;

const int maxn = 1e5+5;
const ll inf = 1e18;
int n, a[maxn];

struct sTree {
	ll seg[2*maxn], lazy[2*maxn];

	void build(int pos, int l, int r) {
		if (l == r) {
			seg[pos] = a[l];
			return;
		}

		build(lc, l, mid); build(rc, mid+1, r);
		seg[pos] = seg[lc] + seg[rc];
	}

	void updateNode(int pos, int l, int r, ll val) {
		seg[pos] += (r-l+1)*val;
		lazy[pos] += val;
	}

	void checkLazy(int pos, int l, int r) {
		if (lazy[pos]){
			updateNode(lc, l, mid, lazy[pos]);
			updateNode(rc, mid+1, r, lazy[pos]);
			lazy[pos] = 0;
		}
	}

	void update(int pos, int l, int r, int ql, int qr, ll val){
		if(l > qr || ql > r) return;
		if (ql <= l && r <= qr) {
			updateNode(pos, l, r, val);
			return;
		}

		checkLazy(pos, l, r);
		update(lc, l, mid, ql, qr, val);
		update(rc, mid+1, r, ql, qr, val);
		seg[pos] = seg[lc] + seg[rc];
	}
	void update(int ql, int qr, ll val) {
		update(1, 1, n, ql, qr, val);
	}

	ll query(int pos, int l, int r, int ql, int qr){
		if(l > qr || ql > r) return 0;
		if(ql <= l && r <= qr) return seg[pos];

		checkLazy(pos, l, r);
		return query(lc, l, mid, ql, qr) + query(rc, mid+1, r, ql, qr);
	}
	ll query(int ql, int qr) {
		query(1, 1, n, ql, qr);
	}
};

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  
  
  return 0;
}