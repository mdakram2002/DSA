#include <iostream>
#include <string.h>
using namespace std;

class Distructor
{
private:
    int health;

public:
    char level;
    char *name;
    static int timeToComplete; // static memebers.

    Distructor()
    {
        cout << "Default Constructor called" << endl;
        name = new char[30];
    }
    Distructor(int health, char level)
    {
        cout << "Parameterize constructor called" << endl;
        this->health = health;
        this->level = level;
    }
    Distructor(Distructor &temp)
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
    int static random()
    {
        return timeToComplete; // static funciton only access to static memeber.
    }
    // Distructor-->
    ~Distructor()
    {
        cout << "Default Distructor called" << endl;
    }
};

int Distructor::timeToComplete = 5; // static data member,

int main()
{
    // good practice
    // cout << Distructor::timeToComplete << endl;
    cout << Distructor::random() << endl;

    // not good paractice,
    // Distructor d;
    // d.timeToComplete;
    // cout << d.timeToComplete << endl;

    // dynamically created object-->

    // Distructor *a = new Distructor;
    // a->timeToComplete = 10;
    // cout << a->timeToComplete << endl;

    // // Statically object creation
    // Distructor hero;
    // hero.print();

    // // Dynamically-->
    // Distructor *b = new Distructor; // default constructor called.
    // b->print();
    // // manually distructor calling karna hota hai,
    // delete b;

    return 0;
};