#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int m;
  cin >> m;
  for (int kg = 0; kg < m; kg++) {
    int i, j;
    cin >> i >> j;
    if (i != 1) {
      a[i-2] += j-1; 
    }
    if (i != n) {
      a[i] += a[i-1]-j;
    }

    a[i-1] = 0;
  }

  for (auto i : a) {
    cout << i << endl;
  }
}