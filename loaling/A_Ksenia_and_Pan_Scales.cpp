#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  string add;
  cin >> add;

  int l = s.find('|');
  int r = s.size() - l-1;

  if (abs(l-r) > add.length() || (s.length() + add.length()) % 2 == 0) {
    cout << "Impossible" << endl;
    return 0;
  }

  int diff = abs(l-r);

  int addl = (add.length()-diff)/2;
  int addr = (add.length()-diff)/2;
  if (diff > 0) {
    if (l > r) {
      addr += diff;
    } else {
      addl += diff;
    }
  }

  int idx = 0;
  while (addl-- > 0) {
    cout << add[idx++];
  }
  cout << s;
  while (addr-- > 0) {
    cout << add[idx++];
  }

  return 0;
}