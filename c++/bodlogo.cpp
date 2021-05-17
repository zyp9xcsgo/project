#include <cmath>
#include <iostream>
using namespace std;

struct Point {
	double x, y;
	double distance(Point p) {
		return sqrt((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y));
	}
}; 
struct LineSegment {
    Point A, B;
    double length() {
        return A.distance(B);
    }
    bool exists (Point p) {
        if (A.distance(p) + B.distance(p) == A.distance(B)) return true;
        else return false;
    }
};
struct Triangle {
    Point A, B, C;
    double P, p;
    double perimeter() {
        P =  A.distance(B) + A.distance(C) + B.distance(C);
        return P;
    }
    double area() {
        p = P / 2;
        return sqrt(p * (p - A.distance(B)) * (p - A.distance(C)) * (p - B.distance(C)));
    }
};
struct Circle {
    Point O;
    int R;
    double P = 3.14;
    double perimeter() {
        return 2 * P * R;
    }
    double area() {
        return P * R * R;
    }
};
struct Square {
    Point A, B, C, D;
    bool utga () {
        if ((A.x - A.x) * (A.x - A.x) + (B.x - B.y) * (B.x - B.y) == (B.x - B.x) * (B.x - B.x) + (C.x - C.y) * (C.x - C.y) == (C.x - C.x) * (C.x - C.x) + (D.x - D.y) * (D.x - D.y) == (D.x - D.x) * (D.x - D.x) + (A.x - A.y) * (A.x - A.y)) return true;
        else return false;
    }
};
struct Rectangle {
    Point A, B, C, D;
    bool tegsh () {
        if ((A.x - A.x) * (A.x - A.x) + (B.x - B.y) * (B.x - B.y) == (C.x - C.x) * (C.x - C.x) + (D.x - D.y) * (D.x - D.y)) {
            if ((B.x - B.x) * (B.x - B.x) + (C.x - C.y) * (C.x - C.y) == (D.x - D.x) * (D.x - D.x) + (A.x - A.y) * (A.x - A.y)) {
                return true;
            } else {
                return false;
            }
        } 
    }
};
struct Polygun {
    Point
};


int main() {
    cout << "<----POINT---->" << endl;
	Point p1, p2;
	p1.x = 0; p1.y = 0;
    p2.x = 1; p2.y = 1;	
    cout << p1.distance(p2) << endl;
    cout << "<----LINESEGMENT---->" << endl;
    LineSegment L;
    L.A.x = 0; L.A.y = 0;
    L.B.x = 2; L.B.y = 2; 
	cout << L.length() << endl;
    cout << L.exists(p2) << endl;
    cout << "<----TRIANGLE---->" << endl;
    Triangle K;
    K.A.x = 2; K.A.y = 1;
    K.B.x = 2; K.B.y = 4;
    K.C.x = 6; K.C.y = 1;
    cout << K.perimeter() << endl;
    cout << K.area() << endl;
    cout << "<----CIRCLE---->" << endl;
    Circle T;
    T.O.x = 4; T.O.y = 4;
    T.R = 3;
    cout << T.perimeter() << endl;
    cout << T.area() << endl;
    cout << "<----Square---->" << endl;
    Square M;
    M.A.x = 1; M.A.y = 1;
    M.B.x = 1; M.B.y = 6;
    M.C.x = 6; M.C.y = 6;
    M.D.x = 6; M.D.y = 1;
    cout << M.utga() << endl;
    cout << "<----Rectangle---->" << endl;
    Rectangle N;
    N.A.x = 1; N.A.y = 1;
    N.B.x = 1; N.B.y = 6;
    N.C.x = 6; N.C.y = 6;
    N.D.x = 6; N.D.y = 1;
    cout << N.tegsh() << endl;
    cout << "<----Polygon---->" << endl;
    
    return 0;
}