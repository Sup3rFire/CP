#include <bits/stdc++.h>
using namespace std;

vector<int> primes;

int main() {
  primes.push_back(2);

  for (int i = 3; i <= 55; i += 2)
  {
    bool divisible = false;
    for (auto j : primes) {
      if (i % j == 0) {divisible = true;
      break;}
    }
    if (!divisible) primes.push_back(i);
  }

  int n, m;
  cin >> n >> m;
  
  if (*(lower_bound(primes.begin(), primes.end(), n)+1) == m) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}