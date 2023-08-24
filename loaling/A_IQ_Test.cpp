#include <bits/stdc++.h>
using namespace std;

bool a[4][4];

bool checkSquare(int i, int j) {
  if (i != 0) {
    if (j != 0) {
      if (a[i-1][j-1] == a[i-1][j] && a[i-1][j-1] == a[i][j-1]) return true;
    }
    if (j != 3) {
      if (a[i-1][j+1] == a[i-1][j] && a[i-1][j+1] == a[i][j+1]) return true;
    }
  }
  if (i != 3) {
    if (j != 0) {
      if (a[i+1][j-1] == a[i+1][j] && a[i+1][j-1] == a[i][j-1]) return true;
    }
    if (j != 3) {
      if (a[i+1][j+1] == a[i+1][j] && a[i+1][j+1] == a[i][j+1]) return true;
    }
  }
  return false;
}

int main() {
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      char x;
      cin >> x;
      if (x == '#') a[i][j] = true;
    }
  }
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (checkSquare(i, j)) {
        cout << "YES" << endl;
        return 0; 
      }
    }
  }

  cout << "NO" << endl;

  return 0;
}