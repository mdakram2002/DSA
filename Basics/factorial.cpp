#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 1){
        return true;
    }
    else{
        return n * fact(n - 1);
    }
}

int main(){

    int num;
    cin >> num;
    cout << "Factorial of "<< num << ": " << fact(num) << endl;
    
    return 0;
}