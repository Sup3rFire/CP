#include <bits/stdc++.h>
using namespace std;

const int maxn = 200005;
vector<int> prereq[maxn];
bool visited[maxn];

void dp(int x) {
  if (visited[x]) return;
  visited[x] = true;
  if (prereq[x].size() == 0) {
    cout << x << " ";
    return;
  }

  for (auto i : prereq[x]) {
    dp(i);
  }
  if (x != 1)
    cout << x << " ";
}

int main() {
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    int c;
    cin >> c;
    for (int j = 0; j < c; j++) {
      int p;
      cin >> p;
      prereq[i].push_back(p);
    }
  }

  dp(1);

  return 0;
}