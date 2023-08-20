#include <bits/stdc++.h>
using namespace std;

int getTopPartner(int x) {
  return max(x, 7-x);
}

int main() {
  int n;
  cin >> n;
  int top;
  cin >> top;
  top = getTopPartner(top);

  bool possible = true;
  int dmp;
  cin >> dmp >> dmp;
  for (int i = 1; i < n; i++) {
    int x, y;
    cin >> x >> y;

    x = getTopPartner(x);
    y = getTopPartner(y);
    int missingtop = 15-x-y;
    if (missingtop != top) {possible = false;break;}
  }

  if (possible) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}