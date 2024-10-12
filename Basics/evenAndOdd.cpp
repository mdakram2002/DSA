#include <iostream>
using namespace std;

int checkEvenAndOdd(int n){

    int i = 2;
    if(n % 2 == 0){
        cout << "this is even" << endl;
    }
    else{
        cout << "this is odd" << endl;
    }
}

int main (){

    int n;
    cin >> n;
    
    int ans = checkEvenAndOdd(n);
    cout << ans << endl;

    return 0;
}