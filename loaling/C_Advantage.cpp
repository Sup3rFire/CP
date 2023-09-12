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
    int n;
    cin >> n;
    int mv1 = -1, mv2 = -1;
    int a[n];
    for (int i = 0; i < n; i++) {
      int s;
      cin >> s;
      if (s > mv1) {
        mv2 = mv1;
        mv1 = s;
      } else if (s > mv2) {
        mv2 = s;
      }
      a[i] = s;
    }

    for (int i = 0; i < n; i++) {
      if (a[i] == mv1) {
        cout << a[i] - mv2 << " ";
      } else {
        cout << a[i] - mv1 << " ";
      }
    }
    cout << endl;
  }
  
  return 0;
}