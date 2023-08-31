#include <bits/stdc++.h>
using namespace std;

int main() {
  char prev = 'a';
  string s;
  cin >> s;
  int c = 0;
  for (auto i : s) {
    c += min(abs(i-prev), 26-abs(i-prev));
    prev = i;
  }

  cout << c;
}