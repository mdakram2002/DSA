#include <iostream>
using namespace std;
class A{

    public:
    void sayHello(){
        cout << "hello Akram Shaikh" << endl;
    }

    void sayHello(string name, int n){
        cout << "hello" << name << endl;
    }

    void sayHello(string name){
        cout << "hello" << name << endl;
    }
    //same name of function but differ function argument is called funtion overloading.
};
int main(){

    A obj;
    obj.sayHello();

    return 0;
}