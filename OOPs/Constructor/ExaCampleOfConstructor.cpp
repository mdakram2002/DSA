#include <iostream>
using namespace std;

class ExaCampleOfConstructor
{

    // if i'm not write here public, then they give error through; by defoult it is private
    // properties
private:
    int health;

public:
    char level;

    void print()
    {
        cout << level << endl;
    }

    int gethealth()
    {
        return health;
    }

    char getlevel()
    {
        return level;
    }

    void sethealth(int h)
    {
        health = h;
    }

    void setlevel(char ch)
    {
        level = ch;
    }
};

int main()
{

    // object creation in ExaCampleOfConstructor
    ExaCampleOfConstructor x;

    x.sethealth('B');
    x.setlevel(66);

    cout << "health is: " << x.gethealth() << endl;
    cout << "level is: " << x.getlevel() << endl;

    cout << endl;

    // Dynamically-->

    ExaCampleOfConstructor *b = new ExaCampleOfConstructor;

    b->sethealth(77);
    b->setlevel('A');
    cout << "health is : " << (*b).gethealth() << endl;
    cout << "level is : " << (*b).level << endl;

    cout << endl;

    cout << "health is : " << b->gethealth() << endl;
    cout << "level is : " << b->level << endl;

    // Akram.level = 'A';
    // Akram.sethealth(70);

    // cout << "health of Akram is: " << Akram.gethealth() << endl;
    // cout << "size of : " << sizeof(Akram) << endl;
    // // cout << "health of Akram: " << Akram.health << endl;
    // cout << "Level of Akram: " << Akram.level << endl;

    return 0;
};