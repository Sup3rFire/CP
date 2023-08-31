#include <bits/stdc++.h>
using namespace std;

int main() {
  int a,b;
  cin >> a >> b;
  int d = 7-max(a, b);
  int g = __gcd(d, 6);
  cout << d/g << "/" << 6/g;
}