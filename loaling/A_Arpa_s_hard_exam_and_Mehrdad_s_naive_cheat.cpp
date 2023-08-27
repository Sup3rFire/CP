#include <bits/stdc++.h>
using namespace std;

int expo(int a, int b) {
  if (b == 0) return 1;
  
  int halfexpo = expo(a, b/2);
  int ret = halfexpo*halfexpo;

  if (b % 2 == 1) {
    ret = ret*a;
  }
  return ret % 10;
}

int main() {
  int n;
  cin >> n;

  cout << expo(8, n) << endl;

  return 0;
}