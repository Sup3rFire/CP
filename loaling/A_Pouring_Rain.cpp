#include <bits/stdc++.h>
using namespace std;

#define ld long double
const ld pi = 3.14159265358979323851;

int main() {
  cout << fixed << setprecision(12);
  int d, h, e;
  ld v;
  cin >> d >> h >> v >> e;
  v /= ((ld)d/2)*((ld)d/2)*pi;
  v -= e;
  // cout << v;
  if (v > 0) {
    cout << "YES" << endl;
    cout << (ld)h/v << endl; 
  } else {
    cout << "NO" << endl;
  }
}