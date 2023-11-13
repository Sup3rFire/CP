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
  
  int total = 0;
  int loal, cute, girl;
  cin >> loal >> cute >> girl;
  for (int i = 1; i <= loal; i++) {
    for (int j = 1; j <= cute; j++) {
      for (int k = 1; k <= girl; k++) {
        int t = i*j*k;

        for (int m = 1; m*m <= t; m++) {
          if (t % m == 0) total+=2;
          if (m*m == t) total--;
        }

        // cout << total << endl;

        total %= 1073741824;
      }
    }
  }
  cout << total;
  return 0;
}