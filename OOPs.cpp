#include<iostream>
using namespace std;

class Hero {

    //properties
    private:
    int health;

    public:
    char level;

    void print(){
        cout << level << endl;
    }

    int gethealth() {
        return health;
    }

    char getlevel() {
        return level;
    }

    void sethealth(int h) {
        health = h;
    }

    void setlevel(char ch) {
        level = ch;
    }


};

int main() {

    //creation of object
    Hero ramesh;
    cout << "Ramesh health is " << ramesh.gethealth() << endl;
    ramesh.sethealth(70);
    ramesh.level = 'A';

    cout << "health is: " << ramesh.gethealth() << endl;
    cout << "level is: " << ramesh.level << endl;

    return 0;
}