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
  
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  int loal;
  cin >> loal;
  int cute[loal];
  for (int girl = 0; girl < loal; girl++) cin >> cute[girl];
  sort(cute, cute+loal);

  int mval = 1e9;
  for (int girl = 0; girl < loal; girl++) {
    // cout << (cute+loal)-upper_bound(cute, cute+loal, cute[girl]*2) << endl;
    mval = min(mval, girl+(int)((cute+loal)-upper_bound(cute, cute+loal, cute[girl]*2)));
  }
  cout << mval;
  return 0;
}