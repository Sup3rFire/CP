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

class DisjointSets {
  private:
	vector<int> parents;
	vector<int> sizes;

  public:
	DisjointSets(int size) : parents(size), sizes(size, 1) {
		for (int i = 0; i < size; i++) { parents[i] = i; }
	}

	/** @return the "representative" node in x's component */
	int find(int x) {
		return parents[x] == x ? x : (parents[x] = find(parents[x]));
	}

	/** @return whether the merge changed connectivity */
	bool unite(int x, int y) {
		int x_root = find(x);
		int y_root = find(y);
		if (x_root == y_root) { return false; }

		if (sizes[x_root] < sizes[y_root]) { swap(x_root, y_root); }
		sizes[x_root] += sizes[y_root];
		parents[y_root] = x_root;
		return true;
	}

	/** @return whether x and y are in the same connected component */
	bool connected(int x, int y) { return find(x) == find(y); }
};

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int n, m1, m2;
  cin >> n >> m1 >> m2;

  DisjointSets d1(n+1), d2(n+1);
  for (int i = 0; i < m1; i++) {
    int u, v;
    cin >> u >> v;
    d1.unite(u, v);
  }
  for (int i = 0; i < m2; i++) {
    int u, v;
    cin >> u >> v;
    d2.unite(u, v);
  }

  vector<pii> ans;
  for (int i = 1; i <= n; i++) {
    for (int j = i+1; j <= n; j++) {
      if (!d1.connected(i, j) && !d2.connected(i, j)) {
        ans.pb({i, j});
        d1.unite(i, j);
        d2.unite(i, j);
      }
    }
  }

  cout << ans.size() << '\n';
  for (auto i : ans) cout << i.fi << ' ' << i.se << '\n';

  return 0;
}