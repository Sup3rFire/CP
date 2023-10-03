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

int n;
char a[100][100];
int nside(int x, int y) {
  int sum = 0;
  if (x != 0) sum += a[x-1][y] == 'o';
  if (x != n-1) sum += a[x+1][y] == 'o';
  if (y != 0) sum += a[x][y-1] == 'o';
  if (y != n-1) sum += a[x][y+1] == 'o';
  return sum; 
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (nside(i, j) % 2 != 0) {
        cout << "NO";
        return 0;
      }
    }
  }
  cout << "YES";
  return 0;
}