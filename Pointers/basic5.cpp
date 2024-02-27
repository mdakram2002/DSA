#include <iostream>
using namespace std;

int main()
{

    int num = 6;

    cout << num << endl;
    cout << "Address of num is: " << &num << endl;

    int *ptr = &num;

    cout << "Address of num: " << ptr << endl; // only ptr address dega;
    cout << "value is: " << *ptr << endl;      // with * value deta hai;

    double d = 4.4;
    double *p1 = &d;

    cout << d << endl;

    cout << "size of Integer is: " << sizeof(num) << endl;
    cout << "size of Pointer is: " << sizeof(ptr) << endl;
    cout << "size of Pointer is: " << sizeof(p1) << endl;
}