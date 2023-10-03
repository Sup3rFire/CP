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
  map<char, int> girl;
  int rich = 0;
  for (int cute = 0; cute < loal*2-2; cute++) {
    char cutegirl; cin >> cutegirl;
    if (cute % 2 == 0) {
      girl[cutegirl]++;
    } else {
      if (girl[tolower(cutegirl)] == 0) rich++;
      else girl[tolower(cutegirl)]--;
    }
  }

  cout << rich;
  
  return 0;
}