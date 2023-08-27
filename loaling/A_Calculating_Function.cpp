#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;

  if (n % 2 != 0) cout << "-";
  cout << (n+1) / 2 << endl;

  return 0;
}