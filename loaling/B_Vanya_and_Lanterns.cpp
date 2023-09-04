#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, l;
  cin >> n >> l;
  cout << fixed << setprecision(10);
  
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a+n);

  int maxdist = max(a[0], l-a[n-1])*2;
  for (int i = 1; i < n; i++) maxdist = max(maxdist, a[i]-a[i-1]);
  cout << (long double)maxdist/2 << endl;
}