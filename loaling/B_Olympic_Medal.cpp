#include <bits/stdc++.h>
using namespace std;

int main() {
  int r1;
  cin >> r1;
  int x;
  cin >> x;
  for (int i = 1; i < r1; i++) {
    int y;
    cin >> y;
    x = max(x, y);
  }

  int p1;
  cin >> p1;
  int y;
  cin >> y;
  for (int i = 1; i < p1; i++) {
    int x;
    cin >> x;
    y = max(x, y);
  }

  int p2;
  cin >> p2;
  int z;
  cin >> z;
  for (int i = 1; i < p2; i++) {
    int x;
    cin >> x;
    z = min(x, z);
  }

  long double a, b;
  cin >> a >> b;
  cout << fixed << setprecision(12) << sqrtl(b*y*x*x/(z*a+y*b));
}