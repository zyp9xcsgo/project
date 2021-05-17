#include <cmath>
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class Baatar{
    string name;
    int hp;
    int damage;
    string type;
  public:
    string getName() {
        return name;
    }
    void setName(string s) {
        name = s;
    }
    int getHp() {
        return hp;
    }
    void setHp(int x) {
        hp = x;
    }
    void recieveDamage(int x) {
        hp -= x;
    }
    int getDamage() {
        return damage;
    }
    void setDamage(int y) {
        damage = y;
    }
    bool isAlive() {
        if (hp > 0) {
            return true;
        } else {
            return false;
        }
    }
    string getType() {
        return type;
    }
    void setType(string z) {
        type = z;
    }
};

void fight(Baatar &A, Baatar &B) {
    int r = rand() % 2;
    if (r == 0) {
        B.recieveDamage(A.getDamage());
    } else {
        A.recieveDamage(B.getDamage());
    }
}

int main() {
    srand(time(NULL));
    Baatar Batman, Superman;

    Batman.setName("Batman");
    Batman.setHp(150);
    Batman.setDamage(20);
    Batman.setType("Human");

    Superman.setName("Superman");
    Superman.setHp(100);
    Superman.setDamage(30);
    Superman.setType("Super Hero");

    while(Batman.isAlive() && Superman.isAlive()) {
        fight(Batman, Superman);
    }
    if (Batman.isAlive()) {
        cout << "Winner is: " << Batman.getName() << endl;
    } else {
        cout << "Winner is: " << Superman.getName() << endl;
    }
    return 0;
}