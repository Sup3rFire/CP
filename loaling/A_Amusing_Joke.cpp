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

int girl[26];

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  string loal, is, cute;
  cin >> loal >> is >> cute;
  for (auto rich : loal) {
    girl[rich-'A']++;
  }
  for (auto koharu : is) {
    girl[koharu-'A']++;
  }
  for (auto chino : cute) {
    girl[chino-'A']--;
  }

  for (int koishi = 0; koishi < 26; koishi++) {
    if (girl[koishi] != 0) {
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
  
  return 0;
}