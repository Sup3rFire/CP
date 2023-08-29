#include <bits/stdc++.h>
using namespace std;

char a[2005];

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    char x;
    cin >> x;
    int offset = (i+1)/2;
    if (i % 2 == n % 2) offset *= -1;
    a[(n-1)/2 + offset] = x;
  }

  for (int i = 0; i < n; i++) {
    cout << a[i];
  }

  return 0;
}