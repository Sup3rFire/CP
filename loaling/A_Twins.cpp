#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int sum = 0;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }

  sort(a, a+n);
  sum /= 2;
  sum++;
  int c = 0;
  int idx = n-1;
  while(sum > 0) {
    sum -= a[idx--];
    c++;
  }
  cout <<c;
}