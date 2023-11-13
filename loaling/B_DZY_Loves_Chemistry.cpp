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
#define isvowel(x) (x) == 'a' || (x) == 'i' || (x) == 'u' || (x) == 'e' || (x) == 'o'

const ld EPS = 1e-9;
const ld PI = 3.141592653589793238462643383279502884197169399375105820974944;

int parent[51];
int n, m;

int getParent(int idx) {
  if (parent[idx] == idx) return idx;
  return parent[idx] = getParent(parent[idx]);
}

void unionNode(int u, int p) {
  parent[getParent(u)] = getParent(p);
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    parent[i] = i;
  }
  
  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    unionNode(x, y);
  }

  set<int> nya;
  for (int i = 1; i <= n; i++) {
    nya.insert(getParent(i));
  }

  cout << ((ll)1<<n-nya.size());

  return 0;
}