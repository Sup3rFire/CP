#include <bits/stdc++.h>
using namespace std;

int ans[2];

int main() {
  int n;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int l = 0; int r = n-1;
  for (int i = 0; i < n; i++) {
    if (a[l] > a[r]) {
      ans[i%2] += a[l];
      l++;
    } else {
      ans[i%2] += a[r];
      r--;
    }
  }

  cout << ans[0] << " " << ans[1] << endl;
}