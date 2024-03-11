#include <iostream>
using namespace std;

class A{

    public:
    int a;
    int b;

    int add(){
        return a+b;
    }

    void operator+ (A &obj){
        // int value1 = this-> a;
        // int value2 = obj.a;
        
        // cout << "output: " << value2 - value1 << endl;
        cout << "hello" << endl;
    }
    void operator() (){
        cout << "I'm bracket: " << this->a << endl;
    }
};
class Animal{

    public:

    void speak(){
        cout << "speaking: " << endl;
    }
};

class Dog: public Animal{

    public:

    void speak(){
        cout << "Barking: " << endl;
    }
    // in case if this 'speak()' funtion is not availble in this
    // class then the Animal class funtion speak() called.
};

int main(){

    Dog obj;     // if we're written Dog obj; obj.speck()
    obj.speak(); // then class Dog speck() function is called.

    Animal obj1; // same as above statmente
    obj1.speak();


    /* A obj1, obj2;
    obj1.a = 4;
    obj2.a = 9;

    obj1 + obj2;

    obj1();
    */
    return 0;
}