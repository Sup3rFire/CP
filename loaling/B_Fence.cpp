#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,k;
  cin >> n >> k;

  int a[n+1];
  int minsum = 0; 
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    if (i <= k) minsum += a[i];
  }
  int currsum = minsum;

  int minidx = 1;
  for (int i = 2; i <= n-k+1; i++) {
    currsum += a[i+k-1] - a[i-1];
    if (currsum < minsum) {
      minidx = i;
      minsum = currsum;
    }
  }
  cout << minidx;
}