#include <bits/stdc++.h>
using namespace std;

string str;

bool iswub(int i) {
  if (i >= str.length() - 2) return false;
  if (str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B') {
    return true;
  }
  return false;
}

int main() {
  cin >> str;

  bool prevwub = true;
  for (int i = 0; i < str.length(); i++) {
    if (iswub(i)) {
      if (!prevwub) cout << " ";
      prevwub = true;
      i+=2;
      continue;
    }
    prevwub = false;
    cout << str[i];
  }

  return 0;
}