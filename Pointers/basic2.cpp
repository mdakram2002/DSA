#include <iostream>
using namespace std;

int main()
{

    int i = 5;

    /*
    int *q = &i;
    cout << "Address of i is: " << q << endl;
    cout << "vlaue of i: " << *q << endl;

    int *p = 0;
    p = &i;

    cout << "Address of i is: " << p << endl;
    cout << "vlaue of i: " << *p << endl;
    */

    int *p = &i;

    // cout<<endl;
    // cout << *p << endl;
    // cout << p << endl;

    // cout << endl;

    // cout << p - (5) << endl;
    // cout << *p - (5) << endl;
    // cout<< (*p)++ <<endl;

    //copy pointer with new variable:
    int *q = p;

    cout << *q << " - " << *p << endl;
    cout << q << " - " << p << endl;

    cout << endl;

    return 0;
}