#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  int n;
  ll x;
  cin >> n;
  cin >> x;

  int distress = 0;
  for (int i = 0; i < n; i++) {
    char sym;
    ll amo;
    cin >> sym >> amo;
    if (sym == '+') x += amo;
    else {
      if (amo > x) distress++;
      else x -= amo;
    }
  }
  cout << x << " " << distress; 
}