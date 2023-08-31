#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  string prev;
  cin >> prev;
  int c = 1;
  for (int i = 1; i < n; i++) {
    string x;
    cin >> x;
    if (x != prev) {
      prev = x;
      c++;
    }
  }
  cout << c;
}