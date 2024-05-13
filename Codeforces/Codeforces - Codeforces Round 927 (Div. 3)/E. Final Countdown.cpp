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

const int maxn = 4e5+5;
int a[maxn];

void loalisaverycuteegirl() {
  int n;
  cin >> n;
  string x;
  cin >> x;
  a[0] = 0;
  int carry = 0;
  for (int i = 1; i <= n; i++) {
    a[i] = a[i-1]+(x[i-1]-'0');
  }
  string xm = "";
  for (int i = n; i > 0; i--) {
    int x = a[i]+carry;
    xm += ('0' + x % 10);
    carry = x / 10;
  }
  xm += '0' + carry;
  bool startprint = false;
  for (auto it = xm.rbegin(); it != xm.rend(); it++) {
    if (!startprint && *it == '0') continue;
    else {
      startprint = true;
      cout << *it;
    }
  }
  cout << '\n';
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) loalisaverycuteegirl();
  
  return 0;
}