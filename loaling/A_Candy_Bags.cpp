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
  
  int loal;
  cin >> loal;

  for (int girl = 1; girl <= loal; girl++) {
    for (int cute = 0; cute < loal/2; cute++) {
      cout << loal*cute+girl << " ";
    }
    for (int cute = 0; cute < loal/2; cute++) {
      cout << pow2(loal)-loal*cute-girl+1 << " ";
    }
    cout << endl;
  }
  
  return 0;
}