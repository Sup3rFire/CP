#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  if (s.length() == 1) {
    cout << 0 << endl;
    return 0;
  }
  int sum = 0;
  int iter = 1;
  for (auto i : s) {
    sum += i - '0';
  }

  while (sum / 10 >= 1) {
    iter++;
    int sumx = sum;
    int snew = 0;
    for (;sum > 0; sum/=10) {
      snew += sum % 10;
    }
    sum = snew;
  }

  cout << iter << endl;

}