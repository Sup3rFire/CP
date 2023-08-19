#include <bits/stdc++.h>
using namespace std;

int main() {
  int m;
  cin >> m;
  
  int a[m];
  int sum = 1;
  for (int i = 0; i < m; i++) {
    cin >> a[i];
    sum += a[i];
  }

  sum = sum/2;

  int scount = 1;
  for (int i = 1; i <= m; i++) {
    scount += a[i-1];
    if (scount > sum) {
      cout << i << " " << a[i-1]-(scount-sum)+1 << endl;
      break;
    }
  }

  return 0;
}