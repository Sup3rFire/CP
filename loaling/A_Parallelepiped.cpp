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
  
  int a, b, c;
  cin >> a >> b >> c;  
  
  for (int i = 1; i <= 1e4; i++) {
    if (a % i == 0) {
      int j = a/i;
      for (int k = 1; k <= 1e4; k++) {
        if (k*j == b && k*i == c) {
          cout << j*4 + i*4 + k*4;
          return 0;
        }
      }
    }
  }
  
  return 0;
}