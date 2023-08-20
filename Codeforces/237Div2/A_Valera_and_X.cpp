#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  char fc;
  char sc;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == 0 && j == 0) {
        cin >> fc;
        continue;
      }
      if (i == 0 && j == 1) {
        cin >> sc;
        if (fc == sc) {
          cout << "NO" << endl; 
          return 0;
        }
        continue;
      }

      bool diagonal = i == j;
      if (i+j == n-1) {
        diagonal = true;
      }

      char x;
      cin >> x;

      if (diagonal && x != fc) {
        cout << "NO" << endl; 
        return 0;
      }
      if (!diagonal && x != sc) {
        cout << "NO" << endl; 
        return 0;
      }
    }
  }

  cout << "YES" << endl;

  return 0;
}