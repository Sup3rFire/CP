#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll m = 1e9+7;

ll fastexpo(ll a, ll b)
{
  if (b == 0)
    return 1;

  ll t = fastexpo(a, b / 2);
  ll ret = t * t % m;
  if (b % 2 == 1)
  {
    ret = (ret * a) % m;
  }

  return ret;
}

int main() {
  ll n;
  cin >> n;

  cout << (fastexpo(3, 3*n)+m-fastexpo(7, n))%m;

  return 0;
}