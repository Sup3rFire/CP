#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a = 0, d = 0;
  for (int i = 0; i < n; i++) {
    char x;
    cin >> x;
    if (x == 'A') a++;
    else d++;
  }
  
  if (a == d) {
    cout << "Friendship";
  } else if (a > d) {
    cout << "Anton";
  } else {
    cout << "Danik";
  }
}