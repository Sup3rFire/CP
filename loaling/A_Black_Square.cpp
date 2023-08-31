#include <bits/stdc++.h>
using namespace std;

int main() {
  int a[5];
  cin >> a[1] >> a[2] >> a[3] >> a[4];

  int c = 0;
  string s;
  cin >> s;
  for (auto i : s) {
    c += a[i-'0'];
  }
  cout << c;
}