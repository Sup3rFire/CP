#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, t, k, d;
  cin >> n >> t >> k >> d;

  int cycles = (n+k-1) / k;
  int timetobeat = cycles * t;
  d++;
  if (timetobeat-d > 0) {
    if ((timetobeat-d) / t > 0) cout << "YES";
    else cout << "NO";
  } else {
    cout << "NO";
  }
}