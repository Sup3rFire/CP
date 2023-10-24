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
  
  int loal, cute, girl;
  cin >> loal >> cute >> girl;
  int loalcute[loal];
  int loalgirl[cute];
  for (int cutegirl = 0; cutegirl < loal; cutegirl++) {
    cin >> loalcute[cutegirl];
  }
  for (int cutegirl = 0; cutegirl < cute; cutegirl++) {
    cin >> loalgirl[cutegirl];
  }
  sort(loalcute, loalcute+loal);
  sort(loalgirl, loalgirl+cute);

  int loalcutegirl = 0;
  int loalnya = 0;
  for (auto cutegirl : loalgirl) {
    while (loalcute[loalcutegirl] <= cutegirl + girl) {
      if (loalcute[loalcutegirl] < cutegirl - girl) {
        loalcutegirl++;
      } else {
        loalnya++;
        loalcutegirl++;
        break;
      }
    }
  }

  cout << loalnya;

  return 0;
}