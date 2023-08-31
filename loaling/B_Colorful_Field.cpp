#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>

int main() {
  int n, m, k, t;
  cin >> n >> m >> k >> t;

  pii waste[k];

  for (int i = 0; i < k; i++) {
    int a, b;
    cin >> a >> b;
    waste[i] = {a,b};
  }

  sort(waste, waste+k);

  for (int kagi = 0; kagi < t; kagi++) {
    pii coords;
    cin >> coords.first >> coords.second;
    
    auto find = lower_bound(waste, waste+k, coords);
    if (find->first == coords.first && find->second == coords.second) {
      cout << "Waste" << endl;
      continue;
    }

    int d = (((coords.first-1)*m+coords.second)-((find-waste)))%3;
    if (d == 0) {
      cout << "Grapes" << endl;
    } else if (d == 1) {
      cout << "Carrots" << endl;
    } else {
      cout << "Kiwis" << endl;
    }
  }
}