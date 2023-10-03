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

int loalgirl[10] = {2, 7, 2, 3, 3, 4, 2, 5, 1, 2};

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  char loal, girl;
  cin >> loal >> girl;
  cout << loalgirl[loal-'0']*loalgirl[girl-'0'];
  
  return 0;
}