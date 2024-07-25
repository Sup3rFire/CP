#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds;

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
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> 

const ld EPS = 1e-9;
const ld PI = 3.141592653589793238462643383279502884197169399375105820974944;

void loalisaverycuteegirl() {
  int n;
  cin >> n;
  bool a0 = false;
  bool a1 = false;
  set<string> transition;
  map<string, int> kv;
  int a01 = 0;
  int a10 = 0;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    if (s[0] == s.back()) {
      if (s[0] == '0') a0 = true;
      else a1 = true;
    } else {
      transition.insert(s);
      kv[s] = i+1;
      if (s[0] == '0') a01++;
      else a10++;
    }
  }
  if (transition.size() == 0) {
    if (a0 && a1) cout << "-1\n";
    else cout << "0\n\n";
  } else {
    vector<int> ans;
    if (a01 < transition.size()/2) {
      for (auto i : transition) {
        if (a01 < transition.size()/2) {
          if (i[0] == '1') {
            string rev = i;
            reverse(all(rev));
            if (!transition.count(rev)) {
              ans.pb(kv[i]);
              a01++;
            }
          }
        }
      }
      if (a01 < transition.size()/2) {
        if (a0 && a1) {cout << "-1\n"; return;}
      }
    }
    if (a10 < transition.size()/2) {
      for (auto i : transition) {
        if (a10 < transition.size()/2) {
          if (i[0] == '0') {
            string rev = i;
            reverse(all(rev));
            if (!transition.count(rev)) {
              ans.pb(kv[i]);
              a10++;
            }
          }
        }
      }
      if (a10 < transition.size()/2) {
        if (a0 && a1) {cout << "-1\n"; return;}
      }
    }
    cout << ans.size() << '\n';
    for (auto i : ans) cout << i << ' ';
    cout << '\n';
  }
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) loalisaverycuteegirl();
  
  return 0;
}