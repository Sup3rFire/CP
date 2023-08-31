#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  sort(s.begin(), s.end());
  cout << ((unique(s.begin(), s.end()) - s.begin()) % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");
}