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

const ld EPS = 1e-9;
const ld PI = 3.141592653589793238462643383279502884197169399375105820974944;

const int MAX = 2e5 + 5;
ll tree[MAX*4];
ll lazy[MAX*4];

#define lc id*2
#define rc id*2+1

ll a[MAX];

void build(int id,int le,int ri){
  if(le==ri){
    tree[id] = a[le-1];
    return;
  }
  int mid = (le+ri)/2;
  build(lc,le,mid), build(rc,mid+1,ri);
  return;
}

void updateNode(int pos, ll val) {
  lazy[pos] += val;
}
void checkLazy(int id, int le, int ri) {
  if (lazy[id]) {
    int mid = (le+ri)/2;
    updateNode(lc, lazy[id]);
    updateNode(rc, lazy[id]);
    lazy[id] = 0;
  }
}
void upd(int id, int le, int ri, int ql, int qr, ll val){
  if(le==ri){
    tree[id] += val;
    return;
  }
    
  if (ql <= le && ri <= qr) {
    updateNode(id, val);
    return;
  }

  checkLazy(id, le, ri);
  int mid = (le+ri)/2;
  if(ql<=mid){
    upd(lc,le,mid,ql, qr, val);
  }
  if (qr > mid) {
    upd(rc,mid+1,ri,ql,qr, val);
  }
  return;
}
ll query(int id, int le, int ri, int q) {
  if(le==ri){
    return tree[id];
  }
  if (le > q || q > ri) return 0;
  checkLazy(id, le, ri);

  int mid = (le + ri) / 2;
  return query(lc, le, mid, q) + query(rc, mid+1, ri, q);
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < n; i++) cin >> a[i];
  build(1, 1, n);
  
  for (int i = 0; i < m; i++) {
    int x;
    cin >> x;
    ll values = query(1, 1, n, x+1);
    upd(1,1,n, x+1, x+1, -values);
    upd(1,1,n, 1, n, values/n);
    values %= n;
    if (values > 0) {
      if (x+values >= n) {
        upd(1,1,n, x+1, n, 1);
        upd(1,1,n, 0, values-(n-x), 1);
      } else {
        upd(1,1,n, x+1, x+values, 1);
      }
    }
  }

  for (int i = 0; i < n; i++) cout << query(1, 1, n, i+1) << ' ';

  return 0;
}