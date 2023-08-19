#include <bits/stdc++.h>
using namespace std;

const int maxn = 2004;
int c[maxn][maxn];

bool existsoni[maxn][26];
bool existsonj[maxn][26];
set<int> deleteoni[maxn];
set<int> deleteonj[maxn];

int main() {
  int h, w;
  cin >> h >> w;

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      char x;
      cin >> x;
      int y = x - 'a';
      c[i][j] = y;
      if (existsoni[i][y]) {
        deleteoni[i].insert(y);
      }
      if (existsonj[j][y]) { 
        deleteonj[j].insert(y);
      }

      existsoni[i][y] = true;
      existsonj[j][y] = true;
    }
  }

  int sum = h * w;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (deleteoni[i].count(c[i][j]) || deleteonj[j].count(c[i][j])) {
        sum--;
      }
    }
  }
  cout << sum << endl;
}