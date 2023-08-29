#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  int n, f;
  cin >> n >> f;
  
  ll potential[n];
  ll sum = 0;
  for (int i = 0; i < n; i++) {
    int k, c;
    cin >> k >> c;
    if (c <= k) {
      sum += c;
      potential[i] = 0;
    } else {
      sum += k;
      potential[i] = min(k, c-k);
    }
  }

  sort(potential, potential+n, greater<ll>());

  for (int i = 0; i < f; i++) {
    sum += potential[i];
  }

  cout << sum << endl;
}