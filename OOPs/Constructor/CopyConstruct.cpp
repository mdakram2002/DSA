#include <iostream>
using namespace std;

class SellowCopyConstructor
{
private:
    int health;

public:
    char level;

    SellowCopyConstructor()
    {
        cout << "Default constructor called" << endl;
    }
    SellowCopyConstructor(int health, char level)
    {
        cout << "Parameterize constructor called" << endl;
        this->health = health;
        this->level = level;
    }
    SellowCopyConstructor(SellowCopyConstructor &temp)
    {
        cout << "Copy Constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout << "health : " << this->health << endl;
        cout << "level : " << this->level << endl;
    }

    // int gethealth()
    // {
    //     return health;
    // }

    // char getlevel()
    // {
    //     return level;
    // }

    // void sethealth(int h)
    // {
    //     health = h;
    // }

    // void setlevel(char ch)
    // {
    //     level = ch;
    // }
};

int main()
{

    // Statically object creation
    SellowCopyConstructor x(55, 'A');
    x.print();

    SellowCopyConstructor r(x); // SellowCopyConstructor called.
    r.print();

    r = x; // SellowCopyConstructor called.
    r.print();

    // Dynamically-->

    SellowCopyConstructor *b = new SellowCopyConstructor; // default constructor called.
    b->print();

    return 0;
};