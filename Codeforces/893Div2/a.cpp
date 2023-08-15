#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    int mab = min(a, b);
    a -= mab; b -= mab;
    
    if (a > b) cout << "First" << endl;
    if (b > a) cout << "Second" << endl;
    if (a == b) {
      if (c % 2 == 0) cout << "Second" << endl;
      else cout << "First" << endl;
    }
  }

  return 0;
}