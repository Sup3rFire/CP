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
#define isvowel(x) (x) == 'a' || (x) == 'i' || (x) == 'u' || (x) == 'e' || (x) == 'o'

const ld EPS = 1e-9;
const ld PI = 3.141592653589793238462643383279502884197169399375105820974944;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int m;
  cin >> m;

  int presum[m + 1];
  presum[0] = 0;
  for (int i = 1; i <= m; i++) {
    int x;
    cin >> x;
    presum[i] = presum[i-1]+x;
  }

  int x, y;
  cin >> x >> y;
  
  for (int i = 1; i <= m; i++) {
    if (presum[i-1] >= x && presum[i-1] <= y && presum[m]-presum[i-1] >= x && presum[m]-presum[i-1] <= y) {
      cout << i;
      return 0;
    }
  }

  cout << 0;

  return 0;
}