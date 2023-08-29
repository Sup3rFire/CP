#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n+1];
  for (int i = 1; i <= n; i++) {
    int x;
    cin >> x;
    a[x] = i;
  }

  long long v = 0, g = 0;
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    int x;
    cin >> x;
    v += a[x];
    g += n-a[x]+1;
  }
  cout << v << " " << g << endl;
}