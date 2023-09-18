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
  
  int girl;
  cin >> girl;
  int loal[girl];
  for (int cute = 0; cute < girl; cute++) cin >> loal[cute];

  int nyaaa = 1e9;
  for (int cute = 1; cute < girl-1; cute++) {
    int koishi = loal[0];
    int nya = 0;
    for (int komeiji = 1; komeiji < girl; komeiji++) {
      if (cute == komeiji) continue;
      nya = max(nya, loal[komeiji]-koishi);
      koishi = loal[komeiji];
    }
    nyaaa = min(nyaaa, nya);
  }
  
  cout << nyaaa;

  return 0;
}