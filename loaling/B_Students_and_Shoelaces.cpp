#include <bits/stdc++.h>
using namespace std;

const int maxn = 105;
set<int> adj[105];

// bool visited[105];
// int amountInTree(int x) {
//   visited[x] = true;
//   int amount = 1;
//   for (auto i : adj[x]) {
//     if (!visited[i]) {
//       amount += amountInTree(i);
//     }
//   }
//   return amount;
// }

// void rstVisited() {
//   memset(visited, false, sizeof(visited));
// }

int main() {
  int n, m;
  cin >> n >> m;

  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    adj[x].insert(y);
    adj[y].insert(x);
  }

  int cnt = 0, reprimand = 1;
  while (reprimand > 0) {
    reprimand = 0;
    vector<pair<int, int>> del;
    for (int i = 1; i <= n; i++) {
      if (adj[i].size() == 1) {
        del.push_back({i, *adj[i].begin()});
        reprimand++;
      }
    }
    for (auto &[i, j] : del) {
      adj[j].erase(i);
      adj[i].erase(j);
    }
    if (reprimand > 0) 
      cnt++;
  }
  cout << cnt;
}