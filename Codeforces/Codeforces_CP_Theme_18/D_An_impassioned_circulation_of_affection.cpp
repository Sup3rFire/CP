#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds;

#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

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

int n;
string s;

const int maxn = 1505;
short memo[2][maxn][26][2];

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  cin >> n >> s;

  for (int idx = n-1; idx >= 0; idx--) {
    for (int avail = 0; avail <= n; avail++) {
      for (int fnd = 0; fnd < 26; fnd++) {
        for (int collecting = 1; collecting >= 0; collecting--) {
          if (!collecting) memo[idx%2][avail][fnd][collecting] = max(memo[idx%2][avail][fnd][1], memo[(idx+1)%2][avail][fnd][0]);
          else {
            int cc = s[idx]-'a';
            if (cc != fnd) {
              if (avail) {
                memo[idx%2][avail][fnd][collecting] = memo[(idx+1)%2][avail-1][fnd][collecting]+1;
              } else {
                memo[idx%2][avail][fnd][collecting] = 0;
              }
            } else {
              memo[(idx)%2][avail][fnd][collecting] = memo[(idx+1)%2][avail][fnd][collecting]+1;
            }
          }
        }
      }
    }
  }

  int q;
  cin >> q;
  while (q--) {
    int x; char y;
    cin >> x; cin >> y;
    cout << memo[0][x][y-'a'][0] << '\n';
  }
  
  return 0;
}