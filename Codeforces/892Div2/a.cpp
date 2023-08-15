#include <bits/stdc++.h>
using namespace std;

map<int, int> amount;

void solve()
{
  int n;
  cin >> n;

  amount.clear();

  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    amount[a[i]]++;
  }

  auto smallest = (*amount.begin());
  if (smallest.second >= n)
  {
    cout << -1 << endl;
  }
  else
  {
    cout << smallest.second << " " << n - smallest.second << endl;
    vector<int> displaylater = {};
    for (int i = 0; i < n; i++)
    {
      if (a[i] != smallest.first)
      {
        displaylater.push_back(a[i]);
      }
      else
      {
        cout << a[i] << " ";
      }
    }
    cout << endl;
    for (auto i : displaylater)
    {
      cout << i << " ";
    }
    cout << endl;
  }
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