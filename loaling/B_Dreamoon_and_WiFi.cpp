#include <bits/stdc++.h>
using namespace std;

#define ld long double
#define ll long long

ld ways(int idx, int left) {
  if (idx == 0) {
    if (left == 0) return 1;
    return 0;
  }
  return ways(idx-1, left+1) + ways(idx-1, left-1);
}

int main() {
  cout << fixed << setprecision(12);

  string s1;
  string s2;
  cin >> s1 >> s2;

  int intended = 0;
  int uncertainty = 0;
  for (auto i : s1) {
    if (i == '+') intended++;
    else intended--;
  }
  for (auto i : s2) {
    if (i == '?') uncertainty++;
    else if (i == '+') intended--;
    else intended++;
  }
  if (abs(intended) > uncertainty) {
    cout << 0.0 << endl;
    return 0;
  }
  if (uncertainty == 0) {
    cout << 1.0 << endl;
    return 0;
  }

  cout << ways(uncertainty, intended) / powl(2, uncertainty) << endl;
}