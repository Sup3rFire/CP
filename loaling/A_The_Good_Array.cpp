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
bool a[105];
int n, k;
bool check(int x) {
  int cnt = 0;
  for (int i = 1; i <= x; i++) {
    if (a[i]) cnt++;
  }
  if ((x+k-1)/k > cnt) return false;
  return true;
}

int mirror(int x) {
  return n-x+1;
}

int main () {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> n >> k;
    memset(a, 0, sizeof(a));
    for (int i = 1; i <= n; i++) {
      if (!check(i)) a[i] = a[mirror(i)] = 1;
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
      cnt += a[i];
    }
    cout << cnt << endl;  
  }
  
  return 0;
}