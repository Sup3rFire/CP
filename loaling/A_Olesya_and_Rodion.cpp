#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, t;
  cin >> n >> t;

  if (n == 1) {
    if (t == 10) {
      cout << -1 << endl;
      return 0;
    }
    cout << t << endl;
    return 0;
  }

  cout << t*9;
  for (int i = 0; i < n-2; i++) {
    cout << 0;
  }
  cout << endl;
  return 0;
}