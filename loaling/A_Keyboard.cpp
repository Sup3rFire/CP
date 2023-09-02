#include <bits/stdc++.h>
using namespace std;

string key = "qwertyuiopasdfghjkl;zxcvbnm,./";

int main() {
  char m;
  cin >> m;
  string s;
  cin >> s;
  for (auto i : s) {
    if (m == 'R') {
      cout << key[(key.find(i)-1)];
    } else {
      cout << key[(key.find(i)+1)];
    }
  }
}