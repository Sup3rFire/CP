#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>

#define pow2(a) a*a

const int maxn = 35;
char a[maxn][maxn];
vector<pii> shifts;

map<char, int> dists;

int find_dist(pii shift, int i, int j) {
  return pow2(abs(shift.first-i)) + pow2(abs(shift.second-j));
}

int main() {
  int n, m, x;
  cin >> n >> m >> x;
  x *= x;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> a[i][j];
      if (a[i][j] == 'S') {
        shifts.push_back({i,j});
      }
    }
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      if (a[i][j] != 'S') {
        int dist = 1e9;
        for (auto k : shifts) {
          dist = min(dist, find_dist(k, i, j));
        }

        if (dists.count(a[i][j]))
          dists[a[i][j]] = min(dists[a[i][j]], dist);
        else dists[a[i][j]] = dist;
      }
    }
  }

  int sum = 0;
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    char c;
    cin >> c;
    if (islower(c)) {
      if (!dists.count(c)) {
        cout << -1 << endl;
        return 0;
      }
    } else {
      c = tolower(c);
      
      if (!dists.count(c) || shifts.size() == 0) {
        cout << -1 << endl;
        return 0;
      } else {
        if (dists[c] > x) sum++;
      }
    }
  }

  cout << sum << endl;
  return 0;
}