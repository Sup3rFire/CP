#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  int s = 0, t = 0;
  for (int i = 1; i <= n; i++) {
    char x;
    cin >> x;
    if (!s && x == 'R') s = i;
    if (!t && x == 'L') t = i-1;
    if (s && !t && x == '.') t = i;
    if (!s && t && x == '.') s = i-1;
    if (!t && x == 'L') t = i-1;
  }
  cout << s << " " << t;
  return 0;
}