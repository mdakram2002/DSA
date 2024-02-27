#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 3, 4, 5, 56};

    cout << endl;
    cout << arr << endl;

    // char ch[5] = "abcde"; //get error through bcz of null charactor

    char ch[6] = "abcde";
    cout << ch << endl;

    char *c = &ch[0];
    cout << c << endl; // printing the entire array

    // char *c = "abcde"; //bad practice nahi karna hai aesa
    // cout << "1st: " << c << endl;

    cout << endl; // next lines

    char temp = 'g';
    char *p = &temp;
    cout << p << endl;

    cout << endl;
    return 0;
}