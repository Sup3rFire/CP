#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll GAM(ll x, ll mod) {
  int modx = x % 5;

  return x / 5 + (mod <= modx);
}

int main() {
  ll x, y;
  cin >> x >> y;

  ll sum = 0;

  sum += GAM(x, 6)*GAM(y, 6);
  sum += GAM(x, 4)*GAM(y, 1);
  sum += GAM(x, 3)*GAM(y, 2);
  sum += GAM(x, 2)*GAM(y, 3);
  sum += GAM(x, 1)*GAM(y, 4);  
  
  cout << sum << endl;

  return 0;
}