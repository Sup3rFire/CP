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

int diff(int a, int b) {
  return min({abs(a-b), abs(a-10-b), abs(a+10-b)});
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int n;
  cin >> n;
  string a, b;
  cin >> a >> b;
  int cnt = 0;
  for (int i = 0; i < n; i++) cnt += diff(a[i]-'0', b[i]-'0');
  
  cout << cnt;

  return 0;
}