#include <iostream>
using namespace std;
int main()
{

    /*
        int temp[10] = {1, 3, 4, 55};

        cout << "1st: " << sizeof(temp) << endl;
        cout << "2st: " << sizeof(&temp) << endl;
        cout << "3st: " << sizeof(*temp) << endl;

        int *ptr = &temp[0];

        cout << "1st address of ptr : " << ptr << endl;
        cout << "2nd value of *ptr : " << *ptr << endl;
        cout << "3rd address of &ptr : " << &ptr << endl;


    int a[20] = {11, 22, 33, 44, 55};

    cout << endl;
    // teeno case me same address bheje ga,
    //cout << a << endl;
    //cout << *a << endl;
    // cout << &a << endl;
    // cout << &a[0] << endl;

    // cout << endl;

    int *p = &a[0];

    cout << "1st: " << p << endl;
    //cout << "2st: " << *p << endl;

    cout << "add of oth index of p: " << &p[0] << endl;
    cout << "add of block of p: " << &p << endl;
    //both are differ;
    */

    int arr[10];

    // arr = arr + 1; // ERORR: - error: incompatible types in assignment of 'int*' to 'int [10]'
    // arr = arr + 1;

    int *ptr = &arr[0];
    cout << endl;

    cout << "Before: " << ptr << endl;

    ptr = ptr + 1;
    cout << "After: " << ptr << endl;

    //cout << "After&: " << &ptr << endl;

    cout << endl; 

    return 0;
}