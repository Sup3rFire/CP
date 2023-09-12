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
  
  int n;
  cin >> n;
  string a = "";
  bool possible = false;
  for (int i = 0; i < n; i++) {
    string x;
    cin >> x;
    a += "\n";
    if (!possible) {
      if (x[0] == 'O' && x[1] == 'O') {
        a += "++|";
        a.push_back(x[3]);
        a.push_back(x[4]);
        possible = true;
      } else if (x[3] == 'O' && x[4] == 'O') {
        a.push_back(x[0]);
        a.push_back(x[1]);
        a += "|++";
        possible = true;
      } else {
        a += x;
      }
    } else {
      a += x;
    }
  }
  if (!possible) cout << "NO" << endl; 
  else cout << "YES" << a << endl;

  return 0;
}