#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  
  int sum = 0;
  while (a <= b) {
    sum++;
    a *= 3;
    b *= 2;
  }

  cout << sum;
}