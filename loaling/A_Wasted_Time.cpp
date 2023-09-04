#include <bits/stdc++.h>
using namespace std;

#define pow2(x) (x)*(x)

pair<int, int> pre;
long double getDist(int x, int y) {
  long long ans = pow2(x-pre.first) + pow2(y-pre.second);
  pre = {x, y};
  return sqrtl(ans);
}
int main() {
  int n, k;
  cin >> n >> k;

  cout << fixed << setprecision(9);
  long double ans = 0;
  cin >> pre.first >> pre.second;
  for (int i = 1; i < n; i++) {
    int x, y;
    cin >> x >> y;
    ans += getDist(x, y);
  }
  cout << ans / 50 * k;
}