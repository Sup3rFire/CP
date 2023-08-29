#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n];
  int as[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    as[i] = a[i];
  }

  sort(as, as+n);

  pair<int, int> b = {-1, -1};
  for (int i = 0; i < n; i++) {
    if (a[i] != as[i]) {
      if (b.first == -1) {
        b.first = i;
      } else {
        b.second = i;
      }
    }
  }


  if (b.first == -1) {
    cout << "yes" << endl;
    cout << "1 1" << endl;
  } else {
    reverse(a+b.first, a+b.second+1);
    for (int i = 0; i < n; i++) {
      if (a[i] != as[i]) {
        cout << "no" << endl;
        return 0;
      }
    }
    cout << "yes" << endl;
    cout << b.first+1 << " " << b.second+1 << endl;
  }
  return 0;
}