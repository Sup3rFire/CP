#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, h;
  cin >> n >> h;
  int y = n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x > h) y++;
  }
  cout << y << endl;
}