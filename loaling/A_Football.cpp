#include <bits/stdc++.h>
using namespace std;

map<string, int> vals;
int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    string str;
    cin >> str;

    vals[str]++;
  }

  int maxval = 0;
  string maxteam;
  for (auto i : vals) {
    if (i.second > maxval) {
      maxval = i.second;
      maxteam = i.first;
    }
  }

  cout << maxteam << endl;
  
  return 0;
}