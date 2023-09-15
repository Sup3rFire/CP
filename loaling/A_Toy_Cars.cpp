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
  set<int> loalgirl;
  for (int cute = 1; cute <= loal; cute++) loalgirl.insert(cute);
  for (int cute = 1; cute <= loal; cute++) {
    for (int girl = 1; girl <= loal; girl++) {
      int koishi;
      cin >> koishi;
      if (koishi == 1 || koishi == 3) loalgirl.erase(cute);
      if (koishi == 2 || koishi == 3) loalgirl.erase(girl);
    }
  }
  cout << loalgirl.size() << endl;
  for (auto cute : loalgirl) {
    cout << cute << " ";
  }
  
  return 0;
}