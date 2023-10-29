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

vector<int> primes;
// int brute(int n, int c) {
//   if (n == 0) return 0;
//   else if (n == 1 || n < 0) return -2e9;
//   auto lg = prev(upper_bound(all(primes), n));
//   int lgidx = lg-primes.begin();

//   int cnt;
//   while ((cnt = brute(n-primes[lgidx--], ++c)) == -2e9) {
//   }
//   return cnt+1;
// }

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  // freopen("nya.txt", "w", stdout);

  // for (int i = 3; i*i <= 2e9; i += 2) {
  //   bool prime = true;
  //   for (auto j : primes) {
  //     if (j*j > i) break;
  //     if (i % j == 0) {
  //       prime = false;
  //       break;
  //     }
  //   }
  //   // if (i == 1e8) cout << "n"; 
  //   if (prime) primes.pb(i);
  // }

  int n;
  cin >> n;
  if (n % 2 == 0) {
    if (n == 2) {
      cout << 1;
    } else {
      cout << 2;
    }
  } else {
    bool prime = true;
    for (int i = 3; i*i <= n; i += 2) {
      if (n % i == 0) {
        prime = false;
        break;
      }
    }
    if (prime) {
      cout << 1;
    } else {
      prime = true;
      for (int i = 3; i*i <= n-2; i += 2) {
        if ((n-2) % i == 0) {
          prime = false;
          break;
        }
      }
      if (prime) cout << 2;
      else cout << 3;
    }
  }
  
  return 0;
}