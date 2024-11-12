#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds;

// loal is the cutest girl

#define ll long long
#define int ll
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
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

const ld EPS = 1e-9;
const ld PI = 3.141592653589793238462643383279502884197169399375105820974944;

struct Point {
	int x, y;
	Point() {
		x = 0; y = 0;
	}
	Point(int x, int y) {
		this->x = x; this->y = y;
	}
};
 
struct Vector {
	int x, y;
	Vector() {
		this->x = 0; this->y = 0;
	}
	Vector(int x, int y) {
		this->x = x; this->y = y;
	}
	Vector(Point& P, Point& Q) {
		this->x = Q.x-P.x; this->y = Q.y-P.y;
	}
};
 
int cross(Vector u, Vector v) {
	return u.x*v.y - u.y*v.x;
}
 
int ori(Point& O, Point& A, Point& B) {
	Vector OA(O, A), OB(O, B);
	int c = cross(OA, OB);
	if (c > 0) return 1;
	if (c < 0) return -1;
	return 0;
}
signed main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int n;
  cin >> n;
  Point a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i].x;
    cin >> a[i].y;
  }

  int t;
  cin >> t;
  while (t--) {
    Point origin;
    cin >> origin.x >> origin.y;

    int pl = 0, pr = 2, ans = 0;
    while (pr < n) {
      while (pr < n) {
        if (ori(origin, a[pl], a[pr]) <= 0) {
          pr--;
          break;
        }

        pr++;
      }
      if (pr-pl-1 > 0) ans += pr-pl-1;
      pl++;
    }
    cout << (n*(n-1)*(n-2))/6 - ans << '\n';
  }
  
  return 0;
}