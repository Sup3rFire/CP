#include <bits/stdc++.h>
using namespace std;

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

#define lc 2*pos
#define rc 2*pos+1

const ld EPS = 1e-9;
const ld PI = 3.141592653589793238462643383279502884197169399375105820974944;

const int maxn = 2e5 + 5;

int n, p;
int a[maxn];
string s;

struct Segtree {
  int N;
  vector<int> seg;

  Segtree(int N) : N(N) {
    seg.assign(4*N + 1, 0);
  }
  
  void build(int pos, int l, int r) {
    if (l == r) {
      seg[pos] = a[l] % p;
      return;
    }
    int mid = (l + r) / 2;
    build(lc, l, mid); build(rc, mid+1, r);
    seg[pos] = (seg[lc] * seg[rc]) % p;
  }
  int query(int pos, int l, int r, int ql, int qr) {
    if (l > qr || ql > r) {
      return 1;
    }
    if (ql <= l && r <= qr) {
      return seg[pos] % p;
    }
    int mid = (l + r) / 2;
    int lres = query(lc, l, mid, ql, qr);
    int rres = query(rc, mid+1, r, ql, qr);
    return (lres * rres) % p;
  }
  int query(int ql, int qr) {
    return query(1, 1, N, ql, qr);
  }
};

void loalisaverycuteegirl() {
  cin >> n >> p;
  for (int i = 1; i <= n; i++) cin >> a[i];
  cin >> s;
  Segtree stree(n);
  stree.build(1, 1, n);
  int l = 1, r = n;
  for (auto x : s) {
    cout << stree.query(l, r) << ' ';
    if (x == 'L') l++;
    else r--; 
  }
  cout << '\n';
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) loalisaverycuteegirl();
  
  return 0;
}