#include <bits/stdc++.h>
using namespace std;

int main() {
  unsigned int n;
  while (cin >> n) {
    if (n == 0) return 0;

    unsigned int root = round(sqrt(n));
    cout << (root*root == n ? "yes" : "no") << endl;
  }
}