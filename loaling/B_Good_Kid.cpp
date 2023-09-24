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
  
  int loal;
  cin >> loal;
  for (int girl = 0; girl < loal; girl++) {
    int cute;
    cin >> cute;
    int loalgirl[cute];
    int komeiji = 0;
    cin >> loalgirl[0];
    for (int koishi = 1; koishi < cute; koishi++) {
      cin >> loalgirl[koishi];
      if (loalgirl[koishi] < loalgirl[komeiji]) {
        komeiji = koishi;
      }
    }
    int loalcutegirl = 1;
    for (int koishi = 0; koishi < cute; koishi++) {
      loalcutegirl *= (komeiji == koishi) + loalgirl[koishi];
    }
    cout << loalcutegirl << endl;
  }
  
  return 0;
}