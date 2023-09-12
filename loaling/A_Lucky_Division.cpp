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

int n;
int brute(int x) {
  if (x > n) return false;
  return (n % x == 0) || brute(x*10+4) || brute(x*10+7);
}

int main () {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  cin >> n;
  cout << (brute(4) || brute(7) ? "YES" : "NO") << endl;

  return 0;
}