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

const int maxn = 1e5+5;

int n;
int a[maxn];

ll memo[maxn];
ll dp(int curr_idx) {
  if (a[curr_idx] == 0) return dp(curr_idx-1);
  if (memo[curr_idx] != -1) return memo[curr_idx];
  return memo[curr_idx] = max(dp(curr_idx-1), dp(curr_idx-2)+a[curr_idx]*curr_idx);
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  memset(memo, -1, sizeof(memo));

  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a[x]++;
  }

  cout << dp(maxn-1);
  
  return 0;
}