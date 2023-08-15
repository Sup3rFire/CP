#include <bits/stdc++.h>
using namespace std;

struct Point {
  int x, y;
  Point() {
    x = 0; y = 0;
  }
  Point(int x, int y) {
    this->x = x; this->y = y;
  }
  bool operator< (Point Q) const {
		if (this->x < Q.x) return true;
		if (this->x > Q.x) return false;
		return this->y < Q.y;
  }
  bool operator== (Point Q) const {
    if (this->x == Q.x && this->y == Q.y) return true;
    return false;
  }
};
int dist(Point P, Point Q) {
	int dx = P.x - Q.x, dy = P.y - Q.y;
	return dx*dx + dy*dy;
}

struct Vector {
  int x, y;
  Vector() {
    x = 0; y = 0;
  }
  Vector(int x, int y) {
    this->x = x;
    this->y = y;
  }
	Vector(Point P, Point Q) {
		this->x = Q.x-P.x; this->y = Q.y-P.y;
	}
};
int cross(Vector u, Vector v) {
	return u.x*v.y - u.y*v.x;
}
int ori(Point O, Point A, Point B) {
	Vector OA(O, A), OB(O, B);
	int c = cross(OA, OB);
	if (c > 0) return 1;	//ccw
	if (c < 0) return -1;	//cw
	return 0;             //collinear
}
struct Segment {
	Point P, Q;
	Segment() {
		this->P = Point();
		this->Q = Point();
	}
	Segment(Point P, Point Q) {
		this->P = P;
		this->Q = Q;
	}
};
bool onSegment(Segment S, Point P) {
  int minx = min(S.P.x, S.Q.x), maxx = max(S.P.x, S.Q.x);
  int miny = min(S.P.y, S.Q.y), maxy = max(S.P.y, S.Q.y);
  if (minx <= P.x && P.x <= maxx && miny <= P.y && P.y <= maxy && ori(S.P, S.Q, P) == 0) return true;
  return false;
}
bool intersect(Segment A, Segment B) {
  int O1 = ori(A.P, A.Q, B.P), O2 = ori(A.P, A.Q, B.Q), O3 = ori(B.P, B.Q, A.P), O4 = ori(B.P, B.Q, A.Q);

  if (O1 != O2 && O3 != O4) return true;
  if (O1 == 0 && O2 == 0) {
    if (onSegment(A, B.P) || onSegment(A, B.Q) || onSegment(B, A.P) || onSegment(B, A.Q)) return true;
  }
  return false;
}

struct Polygon {
  vector<Point> A;
  Polygon() {
    A = vector<Point>();
  }
  Polygon(vector<Point> A) {
    this->A = A;
  }
  int next(int idx) {
    idx++;
    if (idx == A.size()) idx = 0;
    return idx;
  }
  int prev(int idx) {
    if (idx == 0) idx = A.size();
    idx--;
    return idx;
  }
  int areaint() {
    int ret = 0;
    for (int i = 0; i < A.size(); i++) {
      ret += A[i].x * (A[next(i)].y - A[prev(i)].y);
    }
    return ret;
  }
};
Point pivot;
bool angularSort(Point &P, Point &Q) {
	if (ori(pivot, P, Q) == 0) {
		return dist(pivot, P) < dist(pivot, Q);
	}
	return ori(pivot, P, Q) > 0;
}
Polygon convexHull(vector<Point> A) {
  sort(A.begin(), A.end(), angularSort);
  vector<Point> hull;
  A.erase(unique(A.begin(), A.end()), A.end());
  if (A.size() < 2) return Polygon(A);
  hull.push_back(A[0]);
  hull.push_back(A[1]);

  for (int i = 2; i < A.size(); i++) {
    while (hull.size() >= 2 && ori(hull.end()[-1], hull.end()[-2], A[i]) >= 0) hull.pop_back();
    hull.push_back(A[i]);
  }
  return Polygon(hull);
};

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0);

  return 0;
}