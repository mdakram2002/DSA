#include <iostream>
using namespace std;

class Animal{
public:

    int age;
    int health;

public:

    void bark(){
        cout << "Barking loudly: " << endl;
    }
};

class Human {
    public:

    string color;

    void speck(){
        cout << "specking medium: " << endl;
    }  
};
class Hybrid: public Human, public Animal{

};
int main(){

    Hybrid hd;
    hd.bark();
    hd.speck();

    return 0;
}
