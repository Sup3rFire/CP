#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, t;
  cin >> n >> t;
  char loal[n];
  for (int i = 0; i < n; i++) {
    cin >> loal[i];
  }

  for (int kagi = 0; kagi < t; kagi++) {
    for (int i = 0; i < n-1; i++) {
      if (loal[i] == 'B' && loal[i+1] == 'G') {
        swap(loal[i], loal[i+1]);
        i++;
      }
    }
  }

  for (auto i : loal) {
    cout << i;
  }

  return 0;
}