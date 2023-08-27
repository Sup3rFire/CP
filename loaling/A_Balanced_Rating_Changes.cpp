#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  bool rd = false;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x % 2 == 0) {
      cout << x/2 << endl;
    } else {
      if (!rd) {
        cout << (x-1)/2 << endl;
      } else {
        cout << (x+1)/2 << endl;
      }
      rd = !rd;
    }
  }
}