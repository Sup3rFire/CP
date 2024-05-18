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

string s;
set<string> ans;
void fans(int idx, string before) {
  if (idx == s.size()) ans.insert(before);
  else if (s[idx] != '?') fans(idx+1, before+s[idx]);
  else {
    fans(idx+1, before);
    for (char i = 'a'; i <= 'e'; i++) {
      fans(idx+1, before+(char)i);
    }
  }
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int n, m;
  cin >> n >> m;
  vector<string> a;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    a.pb(s);
  }
  sort(all(a));
  while (m--) {
    cin >> s;
    ans.clear();
    fans(0, "");
    int ret = 0;
    for (auto i : ans) {
      ret += upper_bound(all(a), i)-lower_bound(all(a), i);
    }
    cout << ret << '\n';
  }
  
  
  return 0;
}