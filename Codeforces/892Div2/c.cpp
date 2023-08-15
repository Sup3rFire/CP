#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin >> n;

  int reversal = 1;
  int maxa = 0;
  while (++reversal <= n)
  {
    int ans = 0;
    int maxs = 0;
    for (int i = 1; i <= n; i++)
    {
      if (i > n - reversal)
      {
        int cs = i * (n - (reversal + i - n) + 1);
        maxs = max(maxs, cs);
        ans += cs;
      }
      else
      {
        ans += i * i;
      }
    }
    ans -= maxs;
    if (maxa < ans)
    {
      maxa = ans;
    }
  }
  cout << maxa << endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  for (int kagi = 0; kagi < t; kagi++)
    solve();

  return 0;
}