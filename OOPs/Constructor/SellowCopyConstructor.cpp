#include <iostream>
#include <string.h>
using namespace std;

class SellowCopyConstructor
{
private:
    int health;

public:
    char level;
    char *name;

    SellowCopyConstructor()
    {
        cout << "Default constructor called" << endl;
        name = new char[30];
    }
    SellowCopyConstructor(int health, char level)
    {
        cout << "Parameterize constructor called" << endl;
        this->health = health;
        this->level = level;
    }
    SellowCopyConstructor(SellowCopyConstructor &temp)
    {
        // deep copy concept
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy Constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout << endl;
        cout << "[ name: " << this->name << ", ";
        cout << "health: " << this->health << ", ";
        cout << "level: " << this->level << " ]";
        cout << endl;
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
    void setName(char name[])
    {
        strcpy(this->name, name);
    }
};

int main()
{

    // Statically object creation
    SellowCopyConstructor hero;

    char name[] = "Noraiz Akram";
    hero.setName(name);
    hero.sethealth(23);
    hero.setlevel('A');
    // hero.print();

    SellowCopyConstructor hero2(hero);
    // hero2.print();

    hero2.name[0] = 'A';
    hero2.print();

    hero.print();

    hero2 = hero; // copy assingment oprator

    hero.print();
    hero2.print();

    // SellowCopyConstructor = hero2(hero);

    // SellowCopyConstructor r(hero); // SellowCopyConstructor called.
    // r.print();

    // r = hero; // SellowCopyConstructor called.
    // r.print();

    // Dynamically-->

    // SellowCopyConstructor *b = new SellowCopyConstructor; // default constructor called.
    // b->print();

    return 0;
};