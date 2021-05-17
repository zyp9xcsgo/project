#include <iostream>

using namespace std;


// Удамшил

class Date {
public:
	int year, month, day;
	/// ...
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

class DateTime : public Date {
public:
	int hour, minute, second;
	/// ...
	int getHour() {
		return hour;
	}

	int getMinute() {
		return minute;
	}

	int getSecond() {
		return second;
	}

	void setHour(int h) {
		hour = h;
	}

	void setMinute(int m) {
		minute = m;
	}

	void setSecond(int s) {
		second = s;
	}
};

class Person {
public:
	string firstname;
	string lastname;
	string gender;
	Date dob;
	/// ...
};

class SchoolMan : public Person {
public:
	string school_name;
};




class Student : public SchoolMan {
public:
	string id;
	int _class;
};

class Teacher : public SchoolMan {
public:
	string program_name;
};

class  {
public: 
	
};

int main() {
	DateTime dt;

	dt.setYear(2021);
	dt.setMonth(3);
	dt.setDay(1);
	dt.setHour(10);
	dt.setMinute(14);
	dt.setSecond(0);

	cout << dt.getYear() << "-" << dt.getMonth() << "-" << dt.getDay() << " ";
	cout << dt.getHour() << ":" << dt.getMinute() << ":" << dt.getSecond() << endl;

	return 0;
};