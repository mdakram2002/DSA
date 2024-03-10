#include <iostream>
using namespace std;

class A {

    public:

    void func1(){
        cout << "this is function 1:" << endl;
    }
};

class B: public A {

    public:

    void func2(){
        cout << "this is function 2:" << endl;
    }
};

class C: public A, public B {

    public:

    void func3(){
        cout << "this is function 3:" << endl;
    }
};

int main(){

    A a;
    // a.func1();
    
    // B b;
    // b.func1();
    // b.func2();
    // b.func3(); // not inherited

    C c;
    a.A::func1();
    c.B::func1();

    // C c;
    // c.B::func1();
    // c.func2(); // not inherited
    // c.func3();

    return 0;
}