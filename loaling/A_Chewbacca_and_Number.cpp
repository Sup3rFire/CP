#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  bool leadingzero = true;
  for (auto i : s) {
    if (i == '9' && leadingzero) {
      cout << 9;
      leadingzero = false;
      continue;
    }
    leadingzero = false;
    if (i > '4') cout << '9' - i;
    else cout << i;
  }

  return 0;
}