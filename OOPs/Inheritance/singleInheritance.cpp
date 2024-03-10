#include <iostream>
using namespace std;

class Animal{
public:

    int age;
    int health;

public:

    void speak(){
        cout << "Speaking loudly: " << endl;
    }
};

class Cow: public Animal{
    //single Inheritance
};

int main(){

    Cow c;
    c.speak();
    cout << c.age << endl;
    cout << c.health << endl;

    return 0;
}
