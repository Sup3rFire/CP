#include <bits/stdc++.h>
using namespace std;

// loal is a cute girl

#define ll long long
#define ld long double
#define pow2(x) (x)*(x)
#define le left
#define ri right
#define fi first
#define se second
#define pb push_back
#define all(v) v.begin(), v.end()
#define pii pair<int, int>
#define pll pair<long, long>

const ld EPS = 1e-9;
const ld PI = 3.141592653589793238462643383279502884197169399375105820974944;

int n;
void prev(int &x) {
  x--;
  if (x == 0) x = n;
}
void next(int &x) {
  x++;
  if (x == n+1) x = 1;
}
int main () {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  cin >> n;
  int a[n+1];
  for (int i = 1; i <= n; i++) cin >> a[i];

  int x, y;
  cin >> x >> y;

  int idx = x;
  int cnt = 0;
  while(idx != y) {
    cnt += a[idx];
    next(idx);
  }
  idx = x;
  int cnt2 = 0;
  while(idx != y) {
    prev(idx);
    cnt2 += a[idx];
  }
  cout << min(cnt, cnt2);
  
  return 0;
}