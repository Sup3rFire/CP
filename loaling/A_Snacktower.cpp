#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int prev = n+1;
  priority_queue<int> pq;
  for (int i = 1; i <= n; i++) {
    int x;
    cin >> x;
    pq.push(x);
    while (pq.top() == prev-1) {
      cout << " " << pq.top();
      prev = pq.top();
      pq.pop();
    }

    cout << endl;
  }
}