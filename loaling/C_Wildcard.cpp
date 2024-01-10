#include <bits/stdc++.h>
using namespace std;

// loal is a cute girl

#define ll long long
#define ld long double
#define pow2(x) (x) * (x)
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
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  string loal;
  cin >> loal;

  int pos = loal.find_first_of('*');

  string bg = loal.substr(0, pos);
  string ed = loal.substr(pos + 1);

  int girl;
  cin >> girl;
  for (int cute = 0; cute < girl; cute++) {
    string cutegirl;
    cin >> cutegirl;

    if (cutegirl.size() < bg.size()+ed.size()) continue;

    bool loalgirl = true;
    for (int nya = 0; nya < bg.size(); nya++) {
      if (cutegirl[nya] != bg[nya]) {
        loalgirl = false;
        break;
      }
    }
    if (!loalgirl) continue;
    for (int nya = 0; nya < ed.size(); nya++) {
      if (cutegirl[cutegirl.size()-ed.size()+nya] != ed[nya]) {
        loalgirl = false;
        break;
      }
    }
    if (!loalgirl) continue;

    cout << cutegirl << '\n';
  }

  return 0;
}