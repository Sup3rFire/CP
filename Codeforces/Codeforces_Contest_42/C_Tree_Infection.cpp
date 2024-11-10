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

const int maxn = 2e5+5;

void loalisaverycuteegirl() {
  int n;
  cin >> n;
  
  vector<int> need(n+1, 0);

  for (int i = 2; i <= n; i++) {
    int p;
    cin >> p;
    need[p]++;
  }
  need[0] = 1;
  
  sort(need.rbegin(), need.rend());

  int inf = 0;
  int t = 0;
  for (int i = 0; i < need.size(); i++, t++) {
    if (need[i] == 0) break;
  }
  
  for (int j = 0; j <= t; j++) {
    int rem = min(t-j, need[j]);
    need[j] -= rem; inf += rem;
  }

  sort(need.rbegin(), need.rend());
  
  while (inf != n) {
    int li = 0;
    for (int i = 0; i < need.size(); i++) {
      if (need[i] == 0) break;
      need[i]--;  
      inf++;
      if (need[i] > need[li])
        li = i;
    }

    need[li]--;
    inf++;
    
    inf = min(inf, n);
    t++;
  }
  cout << t << '\n';
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) loalisaverycuteegirl();
  
  return 0;
}