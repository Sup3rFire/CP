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
const int maxn = 1e5+5;


int a[maxn], n, stree[maxn * 4];
int leftChild(int node) {
    return node * 2;
}
int rightChild(int node) {
    return node * 2 + 1;
}

void build(int now, int l, int r) {
    if(l == r) {
        stree[now] = a[l];
        return;
    }
    int mid = (l + r) / 2;
    build(leftChild(now), l, mid);
    build(rightChild(now), mid+1, r);
    stree[now] =
        stree[leftChild(now)] & stree[rightChild(now)];
}

// return sum dari A[ql] ... A[qr]
int query(int now, int l, int r, int ql, int qr) {
    // case 1: saling lepas
    if(ql > r || qr < l) return (1 << 30) - 1;
    // case 2: [l,r] sepenuhnya di dalam [ql,qr]
    if(ql <= l && r <= qr) return stree[now];
    int mid = (l + r) / 2;
    return query(leftChild(now), l, mid, ql, qr) &
            query(rightChild(now), mid+1, r, ql, qr);
}


signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int n, m;
  cin >> n >> m;
  
  short data[n+2][30];
  memset(data, 0, sizeof data);
  array<int, 3> q[m];
  for (int j = 0; j < m; j++) {
    int l, r, x;
    cin >> l >> r >> x;
    q[j] = {l, r, x};
    for (int i = 0; i < 30; i++) {
      if ((1 << i) & x) {
        data[l][i]++;
        data[r+1][i]--;
      }
    }
  }
  for (int b = 0; b < 30; b++) {
    int accu = 0;
    for (int i = 1; i <= n; i++) {
      accu += data[i][b];

      if (accu) {
        a[i] |= (1 << b);
      }
    }
  }

  build(1, 1, n);

  for (int i = 0; i < m; i++) {
    if (query(1, 1, n, q[i][0], q[i][1]) != q[i][2]) {
      cout << "NO";
      return 0;
    }
  }
  
  cout << "YES\n";
  for (int i = 1; i <= n; i++) {
    cout << query(1, 1, n, i, i) << ' ';
  }

  return 0;
}