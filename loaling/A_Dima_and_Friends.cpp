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
  int girl = 0;
  for (int cute = 0; cute < loal; cute++) {
    int rich;
    cin >> rich;
    girl += rich;
  }
  int cuteeee = 5;
  for (int cute = 1; cute <= 5; cute++) {
    int cutest = 0;
    for (int loalgirl = 1; loalgirl < cute+girl; loalgirl++) {
      // cout << cutest;
      cutest++;
      if (cutest == loal+1) cutest = 0;
    }
    // cout << cutest << endl;
    if (cutest == 0) cuteeee--; 
  }

  cout << cuteeee;

  return 0;
}