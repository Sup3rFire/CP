#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int a[(s.size()+1)/2];
  for (int i = 0; i < s.size(); i += 2) {
    a[i/2] = s[i] - '0';
  }
  sort(a, a+(s.size()+1)/2);
  cout << a[0];
  for (int i = 1; i < (s.size()+1)/2; i++) {
    cout << "+" << a[i];
  }
}