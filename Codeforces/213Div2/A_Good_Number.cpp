#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int sum = n;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;

    set<int> exist;
    while (x > 0) {
      if (x % 10 <= k)
      exist.insert(x % 10);
      x /= 10;
    }

    if (exist.size()-1 != k) sum--;
  }

  cout << sum << endl;

  return 0;
}