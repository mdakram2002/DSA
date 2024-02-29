#include <iostream>
using namespace std;

int global = 13; // it is a global variable but this not good practice

// creation of reference var not copy the var;
void a(int &i){

    global++;
    cout << "in a: " << global << endl;
    // cout << i << endl;
}
// creation of reference var not copy the var;
void b(int &j){

    (global++) + 2;
    cout << "in j: " << global << endl;
    // cout << j << endl;
}

int main(){

    int i = 5;

    a(i);
    b(i);
    cout << "in main: " << global << endl;

    return 0;
}