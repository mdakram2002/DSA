#include <iostream>
using namespace std;

class A {

    public:

    void func(){
        cout << "this is function A:" << endl;
    }
};

class B{

    public:

    void func(){
        cout << "this is function B:" << endl;
    }
};

class C: public A, public B {

    void func(){
        cout << "this is function C:" << endl;
    }

};

int main(){

    C obj;
    // obj.func();
    obj.A::func();
    obj.B::func();
    // obj.C::func(); // not accessible

    

    return 0;
}