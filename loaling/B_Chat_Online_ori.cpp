#include <bits/stdc++.h>
using namespace std;

const int maxn = 1005;

bool z[maxn];
bool x[maxn];

int main() {
  int p, q, l, r;
  cin >> p >> q >> l >> r;

  for (int i = 0; i < p; i++) {
    int a, b;
    cin >> a >> b;
    for (int i = a; i<=b; i++) z[i] = true;
  }
  for (int i = 0; i < q; i++) {
    int a, b;
    cin >> a >> b;
    for (int i = a; i<=b; i++) x[i] = true;
  }

  int cnt = 0;
  for (int i = l; i<=r; i++) {
    bool possible = false;
    for (int j = 0; j+i <= 1000; j++) {
      if (x[j] && z[j+i]) {
        possible = true;
        break;
      }
    }
    if (possible) cnt++;
  }
  cout << cnt;
}