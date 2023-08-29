#include <bits/stdc++.h>
using namespace std;

const int maxn = 105;
char a[maxn][maxn];

int main() {
  int n, m;
  char THE_PRESIDENT;
  cin >> n >> m;
  cin >> THE_PRESIDENT;

  set<char> colors;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> a[i][j];
      if (a[i][j] == THE_PRESIDENT) {
        if (a[i][j-1] != THE_PRESIDENT && a[i][j-1] >= 'A' && a[i][j-1] <= 'Z') colors.insert(a[i][j-1]);
        if (a[i-1][j] != THE_PRESIDENT && a[i-1][j] >= 'A' && a[i-1][j] <= 'Z') colors.insert(a[i-1][j]);
      } else {
        if ((a[i][j-1] == THE_PRESIDENT || a[i-1][j] == THE_PRESIDENT) && a[i][j] >= 'A' && a[i][j] <= 'Z') colors.insert(a[i][j]);
      }
    }
  }


  cout << colors.size() << endl;

}