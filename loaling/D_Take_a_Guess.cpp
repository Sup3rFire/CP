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

int n, k;
int next(int x) {
  if (x == n) return 1;
  return x+1;
}
int prev(int x) {
  if (x == 1) return n;
  return x-1;
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  cin >> n >> k;
  int vo[n+1], va[n+1];
  for (int i = 1; i <= n; i++) {
    cout << "or " << i << ' ' << next(i) << endl;
    cin >> vo[i];
    cout << "and " << i << ' ' << next(i) << endl;
    cin >> va[i];
  }
  
  int a[n+1];

  for (int i = 1; i <= n; i++) {
    a[i] = (vo[prev(i)]&vo[i])&(va[prev(i)]|va[i]);
  }

  sort(a+1, a+n+1);
  cout << "finish " << a[k];
  return 0;
}