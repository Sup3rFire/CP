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

int a[5];
int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a[x]++;
  }

  a[4] += a[2]/2;
  a[2] = a[2]%2;

  while(--a[1] >= 0) {
    if (a[3] > 0) {
      a[3]--;
      a[4]++;
    } else if (a[2] == 1) {
      a[2]--;
      a[3]++;
    } else {
      a[1]++;
      break;
    }
  }

  cout << a[4] + a[3] + a[2] + (a[1]+3)/4;
  
  return 0;
}