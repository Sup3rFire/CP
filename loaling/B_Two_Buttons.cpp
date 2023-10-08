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
const int maxn = 1e4+5;
int memo[maxn];
int loal, girl;
int dp(int loal) {
  if (loal >= girl) return loal-girl;
  if (loal <= 0) return 1e9;
  if (memo[loal] != -1) return memo[loal];
  memo[loal] = 1e9;
  return memo[loal] = min(dp(loal*2), dp(loal-1))+1;
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  memset(memo, -1, sizeof(memo));
  cin >> loal >> girl;
  cout << dp(loal);
  
  return 0;
}