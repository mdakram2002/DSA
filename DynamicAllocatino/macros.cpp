#include <iostream>
using namespace std;
#define PI 3.14

int main()
{

    int r = 5;
    // double pi = 3.14;
    // r = r + pi;

    double area = PI * r * r; // replace the value of pi(3.14) to PI that is called macros;
    cout << "Area is: " << area << endl;

    return 0;
}