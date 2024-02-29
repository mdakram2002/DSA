#include<iostream>
using namespace std;

int factorial(int n){

    //base case/condition;
    if(n == 0){
        return 1;
    }
    //recursion condition;
    return n * factorial(n-1);

    //based on formulas;
    // n! = n * (n - 1)! 0r f(n) = n * f(n - 1);

    // int smaller = factorial(n-1);
    // int bigger = n * smaller;
    // return bigger;

}

int main(){

    int n;
    cout << "Enter Number for Factorial: " << endl;
    cin >> n;

    int ans = 0;

    ans = factorial(n);
    cout << ans << endl;

    return 0;
}