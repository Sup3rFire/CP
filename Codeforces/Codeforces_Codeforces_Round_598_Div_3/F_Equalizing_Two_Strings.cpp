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

struct fenwick {
  int bit[27];
  fenwick() {
    memset(bit, 0, sizeof bit);
  }
  int get(int i) {
    int ret = 0;
    for (;i; i -= i&-i) {
      ret += bit[i];
    }
    return ret;
  }
  void upd(int i) {
    for (; i <= 26; i += i&-i) {
      bit[i]++;
    }
  }
};

void loalisaverycuteegirl() {
  int n;
  string s, t;
  cin >> n >> s >> t;

  map<char, int> cnt;
  for (auto i : s) {
    cnt[i]++;
  }
  for (auto i : t) {
    cnt[i]--;
  }

  for (auto i : cnt) {
    if (i.se != 0) {
      cout << "NO\n";
      return;
    }
  }

  for (auto i : s) {
    cnt[i]++;
  }
  for (auto i : cnt) {
    if (i.se > 1) {
      cout << "YES\n";
      return;
    }
  }

  fenwick a = fenwick(), b = fenwick();

  int inva = 0, invb = 0;

  for (int i = n-1; i >= 0; i--) {
    inva += a.get(s[i]-'a');
    invb += b.get(t[i]-'a');
    a.upd(s[i]-'a'+1);
    b.upd(t[i]-'a'+1);
  }

  if ((inva % 2) == (invb % 2)) cout << "YES\n";
  else cout << "NO\n";
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) loalisaverycuteegirl();
  
  return 0;
}