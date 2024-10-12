#include <iostream>
using namespace std;

int primeOrNot(int n){

    int i = 2;
    if (i < n){
        
       if (n % i == 0){
            cout << "not prime" << endl;
        }
        else{
            cout << "is prime" << endl;
        }
    }
}
int main(){

    int n;
    cin >> n;
    cout << primeOrNot(n) << endl;

    return 0;
}