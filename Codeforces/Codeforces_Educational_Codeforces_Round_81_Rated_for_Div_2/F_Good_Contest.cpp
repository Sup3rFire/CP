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
const int p = 998244353;

const int maxn = 52;
int n;
pii a[maxn];
vector<int> important = {-1};

ll fastExpo(ll a, ll b) {
  if (b == 0)
    return 1;
  long long res = fastExpo(a, b / 2);
  if (b % 2)
    return ((res * res) % p * a) % p;
  else
    return (res * res) % p;
}

map<ll, ll> memo[maxn];
ll dp(ll pos, ll maxallow) {
  if (pos == n) return 1; 
  if (memo[pos].count(maxallow)) return memo[pos][maxallow];
  maxallow = min(maxallow, (ll)a[pos].se);
  auto it = prev(upper_bound(important.begin(), important.end(), maxallow));
  ll ret = 0;
  while (*it >= a[pos].fi) {
    ll nxt = *it;

    ret += (maxallow-nxt+1)*(maxallow-nxt+2)/2*dp(pos+1, nxt);
    ret %= p;

    maxallow = nxt-1;
    it = prev(it);
  }
  return memo[pos][maxallow] = ret;
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  cin >> n;
  ll totalrange = 1;
  for (int i = 0; i < n; i++) {
    cin >> a[i].fi >> a[i].se;
    important.pb(a[i].fi);
    important.pb(a[i].se);
    totalrange *= a[i].se-a[i].fi+1;
    totalrange %= p;
  }
  sort(all(important));
  important.erase(unique(all(important)), important.end());
  totalrange = fastExpo(totalrange % p, p-2);
  
  cout << (dp(0, 1e9)*totalrange) % p;

  return 0;
}