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

const int maxn = 1e5 + 5;
int girl[maxn];
int memo[maxn][maxn];

int dp(int cute, int lasttake) {
  if (memo[cute][lasttake] != -1) cout << memo[cute][lasttake];
  if (girl[cute] <= girl[lasttake]) return memo[cute][lasttake] = max(dp(cute-1, lasttake), dp(cute-1, cute)+1);
  return memo[cute][lasttake] = dp(cute-1, lasttake);
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  memset(memo, -1, sizeof(memo));

  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) {
    cin >> girl[cute];
  }

  cout << dp(loal-1, loal);

  return 0;
}