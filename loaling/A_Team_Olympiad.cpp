#include <bits/stdc++.h>
using namespace std;

int main() {
  short n;
  cin >> n;
  vector<short> a[3];
  for (short i = 1; i <= n; i++) {
    short x;
    cin >> x;
    a[x-1].push_back(i);
  }
  int minam = min({a[0].size(), a[1].size(), a[2].size()});
  cout << minam << endl;
  for (int i = 0; i < minam; i++) {
    cout << a[0][i] << " " << a[1][i] << " " << a[2][i] << endl;
  }
}