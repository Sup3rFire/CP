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
  
  int loal, girl;
  cin >> loal >> girl;
  int rich = -2e9;
  for (int cuteness = 0; cuteness < loal; cuteness++) {
    int koosh, kemiji;
    cin >> koosh >> kemiji;
    rich = max(rich, koosh-max(0, kemiji-girl));
  }

  cout << rich;
  
  return 0;
}