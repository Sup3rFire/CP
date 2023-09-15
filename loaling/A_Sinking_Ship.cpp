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

const ld EPS = 1e-9;
const ld PI = 3.141592653589793238462643383279502884197169399375105820974944;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int loal;
  cin >> loal;
  pair<pii, string> girl[loal];
  for (int cute = 0; cute < loal; cute++) {
    string rich;
    cin >> girl[cute].second >> rich;
    int koishi = 0;
    if (rich == "woman" || rich == "child") koishi = 1;
    else if (rich == "man") koishi = 2;
    else if (rich == "captain") koishi = 3; 
    girl[cute].first = {koishi, cute};
  }

  sort(girl, girl+loal);
  for (auto cute : girl) {
    cout << cute.second << endl;
  }

  return 0;
}