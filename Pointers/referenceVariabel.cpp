#include <iostream>
using namespace std;

int &update1(int i) //this is a bad practice and this is not given an input
{
    int num = 0;
    int &ans = num;
    return ans;
}
int *funct(int n) //same as above problem;
{
    int *ptr = &n;
    return ptr;
}

void update2(int i) // nothing to change bez only copy the value
{
    i++;
}

void update(int &i) // same value but defferent name of variable;
{
    i++;
}

int main()
{

    int i = 5;
    int &j = i; // creation of reference var.
    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;

    cout << endl;

    cout << "befor: " << i << endl;
    update1(i);
    cout << "after: " << i << endl;

    funct(i); //nothing to change
    cout << ": " << i << endl;
}
