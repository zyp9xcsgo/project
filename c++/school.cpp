#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Date {
    int year, month, day;
  public:
    Date() {
        year = 1900;
        month = 1;
        day = 1;
    }
    Date(int y, int m, int d) {
        year = y;
        month = m;
        day = d;
    }
    int getYear() {
        return year;
    }
    int getMonth() {
        return month;
    }
    int getDay() {
        return day;
    }
    void setYear(int y) {
        year = y;
    }
    void setMonth(int m) {
        month = m;
    }
    void setDay(int d) {
        day = d;
    }
};

class Student {
    string id, name, gender, address;
    Date dob;
  public:
    Student() {
        id = "001";
        name = "Orgil";
        gender = "er";
        address = " ";
    }
    Student(string id, string name, string gender, string address) {
        this -> id = id;
        this -> name = name;
        this -> gender = gender;
        this -> address = address;
    }
    Student(string id, string name, string gender) {
        this -> id = id;
        this -> name = name;
        this -> gender = gender;
        address = " ";
    }
    string getId() {
        return id;
    }
    string getName() {
        return name;
    }
    string getGender() {
        return gender;
    }
    string getAddress() {
        return address;
    }
    void setId(string id) {
        this -> id = id;
    }
    void setName(string n) {
        name = n;
    }
    void setGender(string g) {
        gender = g;
    }
    void setAddress(string a) {
        address = a;
    }
};

class Class {
    int n;
    char c;
    vector<Student> students;
public:
    Class() {
        n = 11;
        c = 'A';
    }

    Class(int n, char c) {
        this -> n = n;
        this -> c = c;
    }

    void addStudent(Student s) {
        students.push_back(s);
    }

    Student getStudentById(string id) {
        for(int i = 0; i < students.size(); i++) {
            if(students[i].getId() == id) {
                return students[i];
            }
        }
    }

    vector<Student> getStudents() {
        return students;
    }

    void removeStudentById(string id) {
        for(int i = 0; i < students.size(); i++) {
            if(students[i].getId() == id) {
                students.erase(students.begin() + i);
            }
        }
    }

    int getStudentNumber() {
        return students.size();
    }
};


class School {
    string name, address;
    vector<Class> classes;
public:
    School() {
        name = "Nest";
        address = " ";
    } 
    School(string a, string b) {
        name = a;
        address = b;
    }
    vector<Class> getClass() {
        return classes;
    }
    string getName() {
        return name;
    }
    string getAddress() {
        return address;
    }
    void setName(string a) {
        name = a;
    }
    void setAddress(string o) {
        address = o;
    }
    void addClass(Class c) {
        classes.push_back(c);
    }
};

class Point {
    double x, y;
  public:
    Point() {
        x = 0;
        y = 0;
    }
    Point(double x, double y) {
        this -> x = x;
        this -> y = y;
    }
    //getters
    double getX() {
        return x;
    }
    double getY() {
        return y;
    }
    //setters
    void setX(double x) {
        this -> x = x;
    }
    void setY(double y) {
        this -> y = y;
    }

    double dist(Point p) {
        return sqrt((x - p.getX()) * (x - p.getX()) + (y - p.getY()) * (y - getY()));
    }
};

class Triangle {
    Point A, B, C;
  public:
    Point getA() {
        return A;
    }
    Point getB() {
        return B;
    }
    Point getC() {
        return C;
    }

    void setA(Point A) {
        this -> A = A;
    }
    void setB(Point B) {
        this -> B = B;
    }
    void setC(Point C) {
        this -> C = C;
    }

    double dist(Point p) {
        double x, y;
        return sqrt((x - p.getX()) * (x - p.getX()) + (y - p.getY()) * (y - getY()));
    }

    double perimeter() {
        
    }
    double area() {

    }

};

int main() {

    return 0;
}