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

const int maxn = 1e6 + 5;
int totalcats[maxn];
int dsu[maxn];
int n, m;

void loalisaverycuteegirl() {
  cin >> n >> m;
  
  for (int i = 0; i <= n; i++) {dsu[i] = i; totalcats[i] = 0;}
  for (int i = 0; i < m; i++) {
    int l, r;
    cin >> l >> r;
    totalcats[l]++;
    totalcats[r+1]--;
    dsu[l] = max(dsu[l], r);
  }

  for (int i = 1; i <= n; i++) {
    totalcats[i] = totalcats[i-1]+totalcats[i];
    if (dsu[i-1] > dsu[i] && i <= dsu[i-1]) dsu[i] = dsu[i-1];
  }

  int sum = 0;
  for (int i = 1; i <= n; ) {
    int mval = 0;
    for (int j = i; j <= dsu[i]; j++) {
      mval = max(mval, totalcats[j]);
    }
    sum += mval;
    i = dsu[i]+1;
  }
  cout << sum << '\n';
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) loalisaverycuteegirl();
  
  return 0;
}