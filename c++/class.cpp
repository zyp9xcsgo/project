#include<iostream>

using namespace std;

class Student {
public:
    int angi;
    string buleg;
    string huis;
};

class Book {
public:
    string zohiolch;
    string turul;
    int hevlegdsen_on;
    string garchig;
};

class Date {
public:
    int on;
    int sar;
    int udur;
};

class Point {
public: 
    int x;
    int y;
    int z;
};

int main() {
    Student s;
    s.angi = 11;
    s.buleg = "a";
    s.huis = "er";

    Book b;
    b.zohiolch = "";
    b.turul = "";
    b.hevlegdsen_on = ;
    b.garchig = "";

    Date d;
    d.on = 2020;
    d.sar = 2;
    d.udur = 1;

    Point p;
    p.x = 5;
    p.y = 5;
    p.z = 5;
    return 0;
}
