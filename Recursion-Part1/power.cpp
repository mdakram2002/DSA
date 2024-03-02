#include<iostream>
using namespace std;

int power(int n){

    //base case
    if(n == 0){
        return 1;
    }
    //recursive condition;
    return 2 * power(n-1);

    // based on formulas;
    // f(n) = 2 * f(n - 1);

    // int smallerProblem = power(n-1);
    // int biggerProblem = 2 * smallerProblem;
    // return bigger; 
    // ya above three line to replace with this 2 * power(n-1);

}

int main(){

    int n;
    cout << "Power of: " << endl;
    cin >> n;

    int ans = power(n);
    cout << ans << endl;

    return 0;
}