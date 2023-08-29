#include <bits/stdc++.h>
using namespace std;

#define pcc pair<char, char>

int main() {
  pcc val[3];
  map<char,int> le;
  map<char,int> ri;

  for (int i = 0; i < 3; i++) {
    char a,b,comp;
    cin >> a >> comp >> b;

    if (comp == '>') {
      char temp = a;
      a = b;
      b = temp;
    }

    val[i] = {a, b};
    le[a]++;
    ri[b]++;
  }
  int x = 0;
  char v;
  if (le['A'] && ri['A']) {x++; v = 'A';}
  if (le['B'] && ri['B']) {x++; v = 'B';}
  if (le['C'] && ri['C']) {x++; v = 'C';}
  if (x > 1) {
    cout << "Impossible" << endl;
    return 0;
  }

  if (le['A'] && v != 'A') cout << 'A';
  if (le['B'] && v != 'B') cout << 'B';
  if (le['C'] && v != 'C') cout << 'C';
  cout << v;
  if (ri['A'] && v != 'A') cout << 'A';
  if (ri['B'] && v != 'B') cout << 'B';
  if (ri['C'] && v != 'C') cout << 'C';
}