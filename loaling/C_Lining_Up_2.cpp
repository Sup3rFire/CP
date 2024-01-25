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
#define pll pair<long long, long long>
#define isvowel(x) (x) == 'a' || (x) == 'i' || (x) == 'u' || (x) == 'e' || (x) == 'o'

const ld EPS = 1e-9;
const ld PI = 3.141592653589793238462643383279502884197169399375105820974944;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int n;
  cin >> n;
  int pos[n+1];
  int px[n+1];
  memset(pos, 0, sizeof(pos));
  memset(px, 0, sizeof(px));
  int start;
  for (int i = 1; i <= n; i++) {
    int x;
    cin >> x;
    if (x == -1) start = i;
    else {
      pos[x] = i;
    }
  }

  for (int i = 1; i <= n; i++) {
    px[i] = start;
    start = pos[start];
  }

  for (int i = 1; i <= n; i++) {
    cout << px[i] << " ";
  }

  return 0;
}