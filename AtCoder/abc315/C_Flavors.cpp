#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<long long, long long>

int main() {
  int n;
  cin >> n;

  pii vals[n];
  for (int i = 0; i < n; i++) {
    ll f, s;
    cin >> f >> s;
    vals[i] = {s, f};
  }

  sort(vals, vals+n);

  int f = vals[n-1].second;
  ll maxval = vals[n-2].first;
  if (f == vals[n-2].second) maxval = maxval /2; 
  for (int i = n-2; i >= 0; i--) {
    if (f == vals[i].second) continue;
    maxval = max(maxval, vals[i].first);
    break;
  }

  // auto top = pq.top();
  // pq.pop();

  // ll maxadd = pq.top().first;
  // if (pq.top().second == top.second) {
  //   maxadd /= 2;
  //   while (pq.top().second == top.second) {
  //     pq.pop();
  //   }
  //   maxadd = max(maxadd, pq.top().first);
  // }

  cout << maxval + vals[n-1].first << endl;

  return 0;
}