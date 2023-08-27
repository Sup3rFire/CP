#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int x = s.length() / 2;
  bool y = false;
  if (s.size() % 2 == 1) {
    for (int i = 1; i < s.size(); i++) {
      if (s[i] == '1') y = true;
    }
  }

  cout << x + y << endl;
}