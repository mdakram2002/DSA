#include <iostream>
using namespace std;

class Animal{
public:

    int age;
    int health;

public:

    void speak(){
        cout << "Barking loudly: " << endl;
    }
};

class Cow: public Animal{

    //single Inheritance
};

class AnimalPerjati: public Cow {

    //multilevel Inhritance
};
int main(){

    AnimalPerjati Ap;
    Ap.speak();

    cout << Ap.age << endl;
    cout << Ap.health << endl;

    return 0;
}
