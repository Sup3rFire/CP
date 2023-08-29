#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int maxn = 100005;

ll prefa[maxn];
ll prefas[maxn];
int main() {
  int n, m;
  cin >> n;

  int a[n];
  int a_sorted[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    a_sorted[i] = a[i];
  }

  sort(a_sorted, a_sorted+n);
  
  for (int i = 1; i <= n; i++) {
    prefa[i] = prefa[i-1] + a[i-1];
    prefas[i] = prefas[i-1] + a_sorted[i-1];
  }

  cin >> m;
  for (int kagi = 0; kagi < m; kagi++) {
    int t, l, r;
    cin >> t >> l >> r;
    if (t == 1) {
      cout << prefa[r] - prefa[l-1] << endl;
    } else {
      cout << prefas[r] - prefas[l-1] << endl;
    }
  }
  return 0;
}