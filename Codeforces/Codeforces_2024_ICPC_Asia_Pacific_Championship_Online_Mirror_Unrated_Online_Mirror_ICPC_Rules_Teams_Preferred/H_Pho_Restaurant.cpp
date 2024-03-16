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

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int n;
  cin >> n;
  bool onesupremacy = false;
  bool zerosupremacy = false;
  int correct = 1e9;
  int amount = 0;
  bool has0 = false;
  bool has1 = false;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    int amount1 = 0;
    int amount0 = 0;
    for (auto i : s) {
      if (i == '1') has1 = ++amount1;
      else has0 = ++amount0;
    }
    
    amount += min(amount1, amount0);
    correct = min(correct, max(amount1, amount0)-min(amount1, amount0));

    if (amount1 == amount0) {

    } else if (amount1 < amount0) {
      zerosupremacy = true;
    } else {
      onesupremacy = true;
    }
  }
  if (!onesupremacy && has1) {
    amount += correct;
  }
  if (!zerosupremacy && has0) {
    amount += correct;
  }
  cout << amount;
  return 0;
}