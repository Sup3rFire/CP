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
  
  vector<int> primes;
  primes.push_back(2);
  for(int i = 3; i < 50; i += 2) {
    bool prime=true;
    for (int j=0; j < primes.size() && primes[j]*primes[j] <= i; j++) {
      if (i % primes[j] == 0) {
        prime=false;
        break;
      }
    }
    if (prime)
      primes.push_back(i);
  }

  vector<int> divisor;
  for (auto i : primes) {
    cout << i << endl;
    string check;
    cin >> check;
    if (check == "yes") divisor.pb(i);
  }
  if (divisor.size() > 1) cout << "composite" << endl;
  else {
    if (divisor.size() == 1 && divisor[0] <= 10) {
      cout << divisor[0]*divisor[0] << endl;
      string check;
      cin >> check;
      if (check == "yes") cout << "composite" << endl;
      else cout << "prime" << endl;
    }
    else cout << "prime" << endl;
  }
  
  return 0;
}