#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int c = 0;
  int g = 0;
  for (int i = 0; i < n; i++) {
    short x;
    cin >> x;
    c += x;
    if (c < 0) {g++;c=0;}
  }
  cout << g;
}