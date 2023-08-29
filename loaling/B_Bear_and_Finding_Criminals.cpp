#include <bits/stdc++.h>
using namespace std;

int vals[102];
int n, a;

bool getval(int x) {
  if (x > n || x < 1) return true;
  return vals[x];
}

int main() {
  cin >> n >> a;
  for (int i = 1; i <= n; i++) {
    cin >> vals[i];
  }

  int sum = 0;
  for (int i = 0; i < max(n-a, a-1) + 1; i++) {
    if (getval(a+i) && getval(a-i)) {
      sum++;
      if (a+i <= n && a-i >= 1 && i != 0) sum++;  
    };
  }
  cout << sum << endl;

  return 0;
}