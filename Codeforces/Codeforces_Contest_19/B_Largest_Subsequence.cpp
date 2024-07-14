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
  int n; string s;
  cin >> n >> s;

  string st;
  for (int i = 0; i < n; i++) {
    while (!st.empty() && s[i] > st.back())
      st.pop_back();
    st.pb(s[i]);
  }
  string res = "";
  while (!st.empty()) {
    res += st.back();
    st.pop_back();
  }
  reverse(res.begin(), res.end());

  string rescopy = res;
  sort(all(rescopy), greater<int>());
  if (rescopy != res) {
    cout << "-1\n";
    return;
  }

  int idx = 0; 
  for (int i = 0; i < n && idx < res.size(); i++) {
    if (s[i] == res[idx]) {
      s[i] = res[res.size()-idx-1];
      idx++;
    }
  }
  
  rescopy = s;
  sort(all(rescopy));
  if (rescopy != s) {
    cout << "-1\n";
    return;
  }

  int needed = lower_bound(res.rbegin(), res.rend(), res.front())-res.rbegin();
  cout << needed << '\n';
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) loalisaverycuteegirl();
  
  return 0;
}