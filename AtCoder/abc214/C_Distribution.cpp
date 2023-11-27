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
  
  int n;
  cin >> n;
  ll s[n];
  ll t[n];
  for (int i = 0; i < n; i++) cin >> s[i];
  int mint = 0;
  for (int i = 0; i < n; i++) {
    cin >> t[i];
  
    if (t[i] < t[mint]) {
      mint = i;
    } 
  }

  for (int i = mint; i < mint+n; i++) {
    t[(i+1)%n] = min(t[(i+1)%n], t[i%n]+s[i%n]);
  }

  for (int i = 0; i < n; i++) cout << t[i] << '\n';
  
  return 0;
}