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
  string s;
  cin >> s;

  map<char, int> a;
  for (auto i : s) {
    a[i]++;
  }

  pii ra[26];
  for (int i = 0; i < 26; i++) {
    ra[i] = {a.count(i+'a') ? a[i+'a'] : 0, i};
  }
  
  sort(ra, ra+26);

  set<int> divs;
  for (int i = 1; i*i <= n; i++) {
    if (n % i == 0) {
      divs.insert(i);
      divs.insert(n/i);
    }
  }

  pair<int, string> mn = {1e9, ""};
  for (auto changeto : divs) {
    if (n/changeto > 26) continue;

    map<char, int> b = a;
    set<int> used;
    vector<char> needed;

    for (int i = 25, k = 0; k < n/changeto; i--, k++) {
      char chr = ra[i].se+'a';
      used.insert(chr);
      for (int j = a[chr]; j < changeto; j++) needed.pb(chr);
    }

    string ns = s;
    for (int i = 0; i < n; i++) {
      if (!used.count(ns[i])) {
        ns[i] = needed.back();
        needed.pop_back();
      } else {
        if (b[ns[i]] > changeto) {
          b[ns[i]]--;
          ns[i] = needed.back();
          needed.pop_back();
        }
      }
    }
  
    int changes = 0;
    for (int i = 0; i < n; i++) {
      if (ns[i] != s[i]) changes++;
    }
    mn = min(mn, {changes, ns});
  }

  cout << mn.fi << '\n' << mn.se << '\n';
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) loalisaverycuteegirl();
  
  return 0;
}