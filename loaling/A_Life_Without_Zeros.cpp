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

int rzero(int loal) {
  int cute = 1, girl = 0;
  while (loal > 0) {
    if (loal % 10 != 0) {
      girl += cute*(loal%10);
      cute *= 10;
    }
    loal /= 10;
  }
  return girl;
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int loal, girl;
  cin >> loal >> girl;
  int cute = loal+girl;

  if (rzero(loal)+rzero(girl) == rzero(cute)) cout << "YES";
  else cout << "NO";
  
  return 0;
}