#include <bits/stdc++.h>
using namespace std;

char a[7] = {'R', 'O', 'Y', 'G', 'B', 'I', 'V'};

int main() {
  int n;
  cin >> n;
  int idx = 0;
  while (n > 3) {
    cout << a[n%4];
    n--;
  }
  cout << "BIV";
}