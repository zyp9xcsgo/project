/*
Name: <Zolbayar>
Class: <11a>
*/
#include <vector>
#include <fstream>
#include <iostream>

using namespace std;

class Date{
public:
	int day, month, year;

	int getDay() { 
		return day; 
	}
	int getMonth() { 
		return month; 
	}
	int getYear() { 
		return year; 
	}

	void setDay(int d) { 
		day = d; 
	}
	void setMonth(int m) { 
		month = m; 
	}
	void setYear(int y) { 
		year = y; 
	}
    Date() {
        day = 0;
        month = 0;
        year = 0;
    }
};

class DateTime : public Date {
public:
	int hour, minute, second;

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

	DateTime() {
		hour = 0;
		minute = 0;
		second = 0;
	}

	DateTime(int year, int month,  int day) {
		this -> year = year;
		this -> month = month;
		this -> day = day;
	}
    int toHour() {
        return getSecond() / 3600 + getMinute() / 60 + (getHour() - 8);
    }
};

class Person {
public:
	Date dob;
	string name, gender;

	string getName() { 
		return name; 
	}
	string getGender() { 
		return gender; 
	}

	void setName(string n) { 
		name = n; 
	}
	void setGender(string g) { 
		gender = g; 
	}

	void setDob(Date d) { 
		dob = d; 
	}
	Date getDob() { 
		return dob; 
	}

	Person() {
		name = "noname";
		gender = "secret";
	}

	Person(string name, string gender) {
		this -> name = name;
		this -> gender = gender;
	}
};

class Employee : public Person {
	int id;
	double salary;
public:

	int getId() { 
		return id; 
	}
	double getSalary() { 
		return salary; 
	}

	void setId(int i) { 
		id = i; 
	}
	void setSalary(double s) { 
		salary = s; 
	}

	Employee() {
		id = 0;
		salary = 0;
	}

	Employee(Date dob, string name, string gender) {
		this -> dob = dob;
		this -> name = name;
		this -> gender = gender;
	}
};

class Record {
public:
	Employee ID;
	int employeeId = ID.getId(); 
	DateTime dt, come, out;
	double getSalary(vector<Record> &records, Employee &emp) {
		// Цалин боддог функцыг энд тодорхойлно.
		if (dt.toHour() == 8) {
            return ID.getSalary();
        } else if(dt.toHour() < 8) {
            return ID.getSalary() * (dt.toHour() * 100 / 8);
        } else {
            return ID.getSalary() * (dt.toHour() * 100 / 8 * 1.5);
        }
		// return <цалин>
	}
};


// энэ хэсгийг өөрчилж болохгүй!
int main() {
	// файлаас унших. cin тэй адилхан
	ifstream fin("input.txt");

	vector<Employee> employees;
	vector<Record> records;

	int n; // n ширхэг ажилчин
	fin >> n;
	for (int i = 0; i < n; i++) {
		string n, g;
		int y, m, d, id;
		double s;

		fin >> id >> n >> g >> y >> m >> d >> s;
		// id, name, gender, year, month, day, salary
		Employee e(id, n, g, y, m, d, s);
		employees.push_back(e);
	}

	for (int i = 0; i < 2 * n; i++) {
		int employeeId, y, m, d, h, min, s;
		fin >> employeeId >> y >> m >> d >> h >> min >> s;
		Record record(employeeId, y, m, d, h, min, s);
		records.push_back(record);
	}

	for (int i = 0; i < n; i++) {
		cout << employees[i].getName() << " " << getSalary(records, employees[i]) << endl;
	}

	return 0;
}