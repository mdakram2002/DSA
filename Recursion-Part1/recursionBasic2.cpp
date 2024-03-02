#include <iostream>
using namespace std;

int printCounting(int n){

    if (n == 0){
        return 0; // base case
    }
    cout << n << " "; // processing case

    printCounting(n - 1); // recursive condition
}
// When processing case is among between base case and
// recursive condition is called Tall Recursion

int main(){

    int n;
    cout << "Enter Number for Print counting: " << endl;
    cin >> n;

    int ans = printCounting(n);
    cout << ans << endl;

    return 0;
}