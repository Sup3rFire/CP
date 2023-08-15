#include <bits/stdc++.h>
using namespace std;

const int MAXA = 1e9 + 5;

void solve()
{
  int n;
  cin >> n;

  pair<int, int> lowest[n];

  int lowestsecond = MAXA;
  int lowestfirst = MAXA;

  for (int i = 0; i < n; i++)
  {
    lowest[i].first = lowest[i].second = MAXA;

    int m;
    cin >> m;
    for (int j = 0; j < m; j++)
    {
      int v;
      cin >> v;
      if (v < lowest[i].first)
      {
        lowest[i].second = lowest[i].first;
        lowest[i].first = v;

        lowestfirst = min(lowestfirst, lowest[i].first);
        lowestsecond = min(lowestsecond, lowest[i].second);
      }
      else if (v < lowest[i].second)
      {
        lowest[i].second = v;
        lowestsecond = min(lowestsecond, lowest[i].second);
      }
    }
  }
  long long sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += lowest[i].second;
  }
  sum -= lowestsecond;
  sum += lowestfirst;

  cout << sum << endl;
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