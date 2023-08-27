#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  int mountain[2*n+1];
  for (int i = 0; i < 2*n+1; i++) {
    cin >> mountain[i];
  }

  int idx = 1;
  while (k != 0) {
    if (mountain[idx]-1 > mountain[idx-1] && mountain[idx]-1 > mountain[idx+1]) {
      k--;
      mountain[idx]--;
    }
    idx++;
  }

  for (auto i : mountain) {
    cout << i << " ";
  } 
  return 0;
}