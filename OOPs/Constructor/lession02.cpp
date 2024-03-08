#include <iostream>
using namespace std;

class Parameter
{
    int n, m;

public:
    Parameter(int x, int y); // prameterized constructor;

    Parameter()
    {
        cout << "Default Constructor" << endl;
    }

    void print(void)
    {
        cout << "this is para 1 value of n= " << n << endl;
        cout << "this is para 2 value of m= " << m << endl;
    }
};
Parameter ::Parameter(int x, int y)
{
    n = x;
    m = y;
}

int main()
{
    // statically created object -->

    Parameter para1(10, 20);
    Parameter para2(22, 33);
    para1.print();
    cout << endl;
    para2.print();

    // Dynamically created object -->
    Parameter *P = new Parameter(17, 28);
    cout << endl;
    P->print();

    cout << endl;
    Parameter(); // default constructor calling ,if i'm not written default constructor in class box then they will be error through.
};