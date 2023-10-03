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

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int loal;
  cin >> loal;
  vector<int> girl;
  bool rich = false;
  int koishi = 0;
  int kemiji = 0;
  for (int cute = 0; cute < loal; cute++) {
    int cutegirl;
    cin >> cutegirl;
    if (koishi == 0 && cutegirl < 0) koishi = cutegirl;
    else if (cutegirl > 0 && kemiji == 0) kemiji = cutegirl;
    else if (cutegirl != 0) girl.pb(cutegirl);
  }

  cout << "1 " << koishi << endl;
  if (kemiji) {
    cout << "1 " << kemiji << endl;
  } else {
    cout << "2 " << girl[girl.size()-1] << " " << girl[girl.size()-2] << endl;
    girl.pop_back();
    girl.pop_back();
  }
  
  cout << girl.size()+1 << " 0";
  for (auto cute : girl) {
    cout << " " << cute;
  }

  return 0;
}