#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  if (n == 1) {
    cout << 0;
    return 0;
  }
  int a[n];
  for(int i=0; i<n; i++){
    cin >> a[i];
  }
  sort(a, a+n);
  int prev = a[0];
  int idx = 1;
  while (idx <= n && a[idx] == prev) {
    idx++;
  }
  int prev2 = a[n-1];
  int idx2 = n-2;
  while (idx2 >= 0 && a[idx2] == prev2) {
    idx2--;
  }
  if (idx > idx2) {
    cout << 0;
    return 0;
  }
  cout << idx2-idx+1;
}