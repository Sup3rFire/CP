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

int amounts[105];
int main () {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int t;
  cin >> t;
  for (int kagi = 0; kagi < t; kagi++) {
    int n;
    cin >> n;
    memset(amounts, 0, sizeof(amounts));
    int highestamount = 0;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      amounts[x]++;
      highestamount = max(highestamount, x);
    }
    bool np = false;
    for (int i = 1; i <= highestamount; i++) {
      if (amounts[i] > amounts[i-1]) {
        cout << "NO" << endl;
        np = true;
        break;
      }
    }
    if (!np) cout << "YES" << endl;
  }
  
  return 0;
}