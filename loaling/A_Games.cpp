#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int h[n];
  int g[n];
  for (int i = 0; i < n; i++) {
    cin >> h[i];
    cin >> g[i];
  }

  int c = 0;
  for (auto i : h) {
    for (auto j : g) {
      if (i == j) c++; 
    }
  }
  cout << c;
}