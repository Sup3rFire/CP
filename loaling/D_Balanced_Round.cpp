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

int main () {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int t;
  cin >> t;
  for (int kagi = 0; kagi < t; kagi++) {
    int n, k;
    cin >> n >> k;
    int a[n];
    
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);

    vector<int> disallow = {0};
    for (int i = 1; i < n; i++) {
      if (a[i] - a[i-1] > k) disallow.push_back(i);
    }
    disallow.push_back(n);
    int mval = 1e9;
    for (int i = 1; i < disallow.size(); i++) {
      mval = min(mval, disallow[i-1]+n-disallow[i]);
    }
    cout << mval << endl;
  }
  
  return 0;
}