#include <bits/stdc++.h>
using namespace std;

int main() {
  char x;
  set<char> rs;
  while (true) {
    cin >> x;
    if (x == '}') {cout<<rs.size();return 0;}
    cin >> x;
    if (x == '}') {cout<<rs.size();return 0;}
    rs.insert(x);
  }
}