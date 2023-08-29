#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  
  pair<int, int> a[m];
  for (int i = 0; i < m; i++) {
    cin >> a[i].second >> a[i].first;
  }

  sort(a, a+m);

  int sum = 0;
  for (int i = m-1; i >= 0; i--) {
    int amount = a[i].second;
    if (amount <= n) {
      n -= amount;
      sum += amount*a[i].first;
    } else {
      sum += n*a[i].first;
      break;
    }
  }
  cout << sum << endl;
}