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

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  bool loal[5][5];
  memset(loal, 1, sizeof(loal));
  for (int cute = 1; cute <= 3; cute++) {
    for (int girl = 1; girl <= 3; girl++) {
      int iwtctkf;
      cin >> iwtctkf;
      if (iwtctkf % 2 == 1) {
        loal[cute][girl] = !loal[cute][girl];
        loal[cute-1][girl] = !loal[cute-1][girl];
        loal[cute][girl-1] = !loal[cute][girl-1];
        loal[cute+1][girl] = !loal[cute+1][girl];
        loal[cute][girl+1] = !loal[cute][girl+1];
      }
    }
  }
  for (int cute = 1; cute <= 3; cute++) {
    for (int girl = 1; girl <= 3; girl++) {
      cout << loal[cute][girl];
    }
    cout << endl;
  }
  
  return 0;
}