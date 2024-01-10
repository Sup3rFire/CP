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
#define pll pair<long long, long long>
#define isvowel(x) (x) == 'a' || (x) == 'i' || (x) == 'u' || (x) == 'e' || (x) == 'o'

const ld EPS = 1e-9;
const ld PI = 3.141592653589793238462643383279502884197169399375105820974944;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int n, k;
  cin >> n >> k;

  int a, b, c, d;
  cout << "and 1 2" << endl;
  cin >> a;
  cout << "or 1 2" << endl;
  cin >> b;
  a += b;

  cout << "and 3 2" << endl;
  cin >> b;
  cout << "or 3 2" << endl;
  cin >> c;
  b += c;

  cout << "and 3 1" << endl;
  cin >> d;
  cout << "or 3 1" << endl;
  cin >> c;
  c += d;
  
  int x[n+1];
  x[1] = (a+c-b)/2;
  x[2] = (a+b-c)/2;
  x[3] = (-a+b+c)/2;
  
  for (int i = 4; i <= n; i++) {
    cout << "and 1 " << i << endl;
    cin >> d;
    cout << "or 1 " << i << endl;
    cin >> x[i];
    x[i] += d-x[1];
  }

  sort(x+1, x+n+1);
  cout << "finish " << x[k];

  return 0;
}