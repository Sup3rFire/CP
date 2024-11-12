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
  string s;
  cin >> s;
  if (s.size() == 1) {
    cout << s[0] << char((s[0]-'a'+1)%26+'a');
  } else {
    for (int j = 1; j < s.size(); j++) {
      if (s[j] == s[j-1]) {
        cout << s.substr(0, j) << char((s[j]-'a'+1)%26+'a') << s.substr(j);
        cout << '\n';
        return;
      }
    }
    char i = 'a';
    for (; i == s[0] || i == s[1]; i++) {}
    cout << s[0] << i << s.substr(1);
  }
  cout << '\n';
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) loalisaverycuteegirl();
  
  return 0;
}