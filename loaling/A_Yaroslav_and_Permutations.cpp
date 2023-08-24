#include <bits/stdc++.h>
using namespace std;

map<int, int> loal;
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    loal[x]++;
  }

  int maxval = 0;
  for (auto i : loal) {
    maxval = max(maxval, i.second);
  }
  if (maxval > (n+1)/2) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
  }

  return 0;
}