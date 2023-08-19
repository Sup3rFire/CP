#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  cin >> str;

  string nstr;
  for (auto i : str) {
    if (i != 'a' && i != 'e' && i != 'i' && i != 'o' && i != 'u') {
      nstr.push_back(i);
    }
  }

  cout << nstr << endl;
}