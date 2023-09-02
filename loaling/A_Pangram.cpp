#include <bits/stdc++.h>
using namespace std;

int main() {
  set<char> vals;
  int n;
  cin >>n;
  for(int i=0; i<n; i++){
    char x;
    cin >> x;
    vals.insert(tolower(x));
  }
  if (vals.size() < 26) {
    cout << "NO";
  } else {
    cout << "YES";
  }
}