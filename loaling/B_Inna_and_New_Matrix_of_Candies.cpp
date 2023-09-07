#include <bits/stdc++.h>
using namespace std;

// loal is a cute girl

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
#define pll pair<long, long>

const ld EPS = 1e-9;
const ld PI = 3.141592653589793238462643383279502884197169399375105820974944;

int main () {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int n, m;
  cin >> n >> m;
  set<int> dists;

  for (int i = 0; i < n; i++) {
    int locg, locs;
    for (int j = 0; j < m; j++) {
      char v;
      cin >> v;
      if (v == 'G') locg = j;
      if (v == 'S') locs = j;
    }
    if (locg > locs) {
      cout << -1 << endl;
      return 0;
    }
    dists.insert(locs-locg);
  }
  
  cout << dists.size() << endl;

  return 0;
}