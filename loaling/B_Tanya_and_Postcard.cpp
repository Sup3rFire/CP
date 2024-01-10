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

int needed[52];
int avb[52];

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  string a, b;
  cin >> a >> b;
  
  for (auto i : a) {
    if (i <= 'Z') needed[i-'A']++;
    else needed[i-'a'+26]++;
  }

  int correct = 0;

  for (auto i : b) {
    int id;
    if (i <= 'Z') id = i-'A';
    else id = i-'a'+26;
    if (needed[id] > 0) {
      needed[id]--;
      correct++;
    } else {
      if (id >= 26) avb[id-26]++;
      else avb[id+26]++; 
    }
  }

  int c2 = 0;

  for (int i = 0; i < 52; i++) {
    c2 += min(avb[i], needed[i]);
  }

  cout << correct << ' ' << c2;
  return 0;
}