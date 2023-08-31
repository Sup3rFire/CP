#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  char prev;
  cin >> prev;
  int c = 0;
  for (int i = 1; i < n; i++) {
    char x;
    cin >> x;
    if (x == prev) {
      c++;
    }
    prev = x;
  }
  cout << c;
}