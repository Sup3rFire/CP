#include <bits/stdc++.h>
using namespace std;

int bets[105];
map<int, vector<int>> people[40];

int main()
{
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    int c;
    cin >> c;
    bets[i] = c;
    for (int j = 0; j < c; j++)
    {
      int a;
      cin >> a;
      people[a][c].push_back(i);
    }
  }

  int x;
  cin >> x;

  cout << people[x].begin()->second.size() << endl;
  for (auto i : people[x].begin()->second)
  {
    cout << i << " ";
  }

  return 0;
}