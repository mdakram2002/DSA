#include <iostream>
using namespace std;

// class creation
class Hero{

public:
    int health = 44;

private:
    char level = 'A';
    ;

    int getHealth(int health){

        return health;
    }

    char getlevel(char level){

        return level;
    }

    void setHealth(int h){

        health = h;
    }

    void setlevel(char ch){

        level = ch;
    }
};
int main(){

    Hero hero; // Object creation

    
    hero.health = 40;
    // hero.level = 'A';

    // hero.health;
    // hero.level;

    // hero.setHealth(70);
    // hero.setlevel('S');
    
    // cout <<"health of hero" << getHealth() << endl;
    // cout <<"level of hero" << getlevel() << endl;


    return 0;
}