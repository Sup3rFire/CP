#include <bits/stdc++.h>
using namespace std;

// loal is the cutest girl

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
#define pll pair<long long, long long>
#define isvowel(x) (x) == 'a' || (x) == 'i' || (x) == 'u' || (x) == 'e' || (x) == 'o'

const ld EPS = 1e-9;
const ld PI = 3.141592653589793238462643383279502884197169399375105820974944;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  string girl;
  cin >> girl;
  int loal = 0;
  int cutegirl = 0;
  for (int cute = 0; cute < girl.size()-4; cute++) {
    if (girl.substr(cute, 5) == "heavy") loal++;
    else if (girl.substr(cute, 5) == "metal") cutegirl += loal;
  }
  cout << cutegirl;
  return 0;
}