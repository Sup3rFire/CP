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

const int MAXN = 2005;
const int MAXK = 105;

int N, K;
pii gemstones[MAXK];

int memo[MAXK][MAXN];
int dp(int curr_idx, int available_weight) {
  if (curr_idx == -1) return 0;
  if (memo[curr_idx][available_weight] != -1) return memo[curr_idx][available_weight];
  
  if (gemstones[curr_idx].fi > available_weight) return memo[curr_idx][available_weight] = dp(curr_idx-1, available_weight);
  else return max(dp(curr_idx-1, available_weight), gemstones[curr_idx].se);
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  
  
  return 0;
}