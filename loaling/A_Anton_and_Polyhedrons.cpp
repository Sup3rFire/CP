#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int sum = 0;
  for (int i = 0; i < n; i++) {
    string shape;
    cin >> shape;
    if (shape == "Tetrahedron") sum += 4;
    else if (shape == "Cube") sum += 6;
    else if (shape == "Octahedron") sum += 8;
    else if (shape == "Dodecahedron") sum += 12;
    else if (shape == "Icosahedron") sum += 20;
  }

  cout << sum << endl;
  return 0;
}