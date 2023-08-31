#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, b, d;
  cin >> n >> b >> d;
  int cnt = 0;
  int amo = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x > b) continue;
    amo += x;
    if (amo > d) {
      amo = 0;
      cnt++;
    }
  }
  cout << cnt << endl;
}