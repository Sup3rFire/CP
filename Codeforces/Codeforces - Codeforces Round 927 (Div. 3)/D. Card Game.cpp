#include <bits/stdc++.h>
using namespace std;

// loal is the cutest girl

#define ll long long
#define ld long double
#define pow2(x) (x)*(x)
#define le left
#define ri right
#define fi first
#define se second
#define pb push_back
#define all(v) v.begin(), v.end()
#define pii pair<int, int>
#define pll pair<long long, long long>
#define isvowel(x) (x) == 'a' || (x) == 'i' || (x) == 'u' || (x) == 'e' || (x) == 'o'

const ld EPS = 1e-9;
const ld PI = 3.141592653589793238462643383279502884197169399375105820974944;

int conv(char x) {
  if (x == 'C') return 0;
  else if (x == 'D') return 1;
  else if (x == 'H') return 2;
  else if (x == 'S') return 3;
}

string printcard(int num, int suit) {
  string ret = "";
  ret += '0' + num;
  if (suit == 0) ret += 'C';
  else if (suit == 1) ret += 'D';
  else if (suit == 2) ret += 'H';
  else if (suit == 3) ret += 'S';
  return ret;
}

void loalisaverycuteegirl() {
  string print = "";
  int n;
  cin >> n;
  char nt;
  cin >> nt;
  int trump = conv(nt);
  vector<int> cards[4];
  for (int i = 0; i < 2*n; i++) {
    string x;
    cin >> x;
    cards[conv(x[1])].pb(x[0]-'0');
  }
  int tidx = 0;
  for (int i = 0; i < 4; i++) 
    sort(all(cards[i]));
  for (int i = 0; i < 4; i++) {
    if (i == trump) continue;
    for (int j = 0; j < cards[i].size()/2; j++) {
      print += printcard(cards[i][j*2], i) + " " + printcard(cards[i][j*2+1], i) + '\n';
    }
    if (cards[i].size() % 2 == 1) {
      if (tidx == cards[trump].size()) {
        cout << "IMPOSSIBLE\n";
        return;
      }
      print += printcard(*cards[i].rbegin(), i) + " " + printcard(cards[trump][tidx++], trump) + '\n';
    }
  }
  if (tidx != cards[trump].size()) {
    for (int i = tidx; i < cards[trump].size(); i++)
      print += printcard(cards[trump][i], trump) + " ";
    print += '\n';
  }
  cout << print;
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int loal;
  cin >> loal;
  for (int cute = 0; cute < loal; cute++) loalisaverycuteegirl();
  
  return 0;
}