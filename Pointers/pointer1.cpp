#include <iostream>
#include <vector>
using namespace std;

void update(int **p)
{

    // p = p + 1;
    // Something is change or not: NO

    // *p = *p + 1;
    // Something is change or not: YES

    **p = **p + 1;
    // Something is change or not: YES
}

int main()
{

    int i = 5;

    int *p = &i;     // single pointer
    int **p2 = &p;   // doubley pointers
    int ***p3 = &p2; // multi-pointers

    cout << endl;
    cout << "ALL DONEE:" << endl;

    // cout << "value of i: " << i << endl;
    // cout << "value of *ptr1: " << *ptr1 << endl;
    // cout << "value of **ptr2: " << **ptr2 << endl;
    // cout << "value of ***ptr3: " << ***ptr3 << endl;
    // cout << endl;

    // cout << "Address of &i: " << &i << endl;
    // cout << "Address ptr1: " << ptr1 << endl;
    // cout << "Address of *ptr2: " << *ptr2 << endl;
    // cout << endl;

    // cout << "Address of &ptr1: " << &ptr1 << endl;
    // cout << "Address of ptr2: " << ptr2 << endl;
    // cout << endl;

    // cout << "Address of &ptr3: " << &ptr3 << endl;
    // cout << "Address of ptr3: " << ptr3 << endl;

    cout << "Before: " << i << endl;
    cout << "Before: " << p << endl;
    cout << "Before: " << p2 << endl;
    cout << "Before: " << p3 << endl;

    update(p2);

    cout << endl;
    cout << "After: " << i << endl;
    cout << "After: " << p << endl; //*P denote value and p is denote address
    cout << "After: " << p2 << endl;
    cout << "After: " << p3 << endl;

    cout << endl;
    return 0;
}