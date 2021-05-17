#include <iostream>

using namespace std;

class Student {
  public:
    string id;
    string name;
    int homework_score;
    int exam_score;

    void setId(string s) {
        id = s;
    }

    string getId() {
        return id;
    }
    
    void setName(string a) {
        name = a;
    }

    string getName() {
        return name;
    }

    void setHomeworkScore(int x) {
        homework_score = x;
    }
    void addHomeworkScore(int x) {
        homework_score += x;
    }
    int getHomeworkScore() {
        return homework_score;
    }

    void setExamScore(int c) {
        exam_score = c;
    }
    void addExamScore(int c) {
        exam_score += c;
    }
    int getExamScore() {
        return exam_score;
    }

    int getScore() {
        int x = homework_score;
        int y = exam_score;
        if (x >= 60) {
            x = 60;
        }
        if (y >= 40) {
            y = 40;
        }
        return x + y;
    }

    char getMark() {
        int dun = getScore();
        if (dun >= 90) {
            return 'A';
        }
        if (dun >= 80) {
            return 'B';
        }
        if (dun >= 70) {
            return 'C';
        }
        if (dun >= 60) {
            return 'D';
        }
        return 'F';
    }

    bool isPassed() {
        if (getScore() >= 60) {
            return true;
        } else {
            return false;
        }
    }

    string toString() {
        return "id: " + getId() + ", name: " + getName();
    }
};

int main() {
    Student a, b;
    a.setId("NHS100200"); a.setName("Naruto");
    b.setId("NHS100201"); b.setName("Sasuke");

    a.setHomeworkScore(0);
    b.setHomeworkScore(0);
    a.addHomeworkScore(20);
    b.addHomeworkScore(35);

    a.setExamScore(0);
    b.setExamScore(0);
    a.addExamScore(25);
    b.addExamScore(31);

    cout << "<----Score---->" << endl;
    cout << a.getScore() << endl;
    cout << b.getScore() << endl;

    cout << "<----Mark---->" << endl;
    cout << a.getMark() << endl;
    cout << b.getMark() << endl;

    cout << "<----IsPassed---->" << endl;
    cout << a.isPassed() << endl;
    cout << b.isPassed() << endl;

    cout << "<----ToString---->" << endl;
    cout << a.toString() << endl;
    cout << b.toString() << endl;

    return 0;
}
