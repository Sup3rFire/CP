#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  string t;
  cin >> t;
  int idx = 0;
  for (auto i : t) {
    if (i == s[idx]) idx++;
  }
  cout << idx+1;
}