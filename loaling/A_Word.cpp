#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int upc = 0;
  int loc = 0;
  for (auto i : s) {
    if (islower(i)) loc++;
    else upc++;
  }

  if (loc >= upc) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
  } else {
    transform(s.begin(), s.end(), s.begin(), ::toupper);
  }

  cout << s;
}