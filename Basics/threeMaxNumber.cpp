#include <iostream>
using namespace std;

int checMaxThreeNum(int a, int b, int c){

    if(a > b){
        if(a > c){
            cout << "a is max: " << a <<  endl;
        }
        else{
            cout << "c is max: " << c << endl;
        }
    }
    else{
        if(b > c){
            cout << "b is max: " << b << endl;
        }
        else{
            cout << "c is max: " << c << endl;
        }
    }
}
int main(){

    int a,b,c;
    cin >>a >>b >>c;

    int ans = checMaxThreeNum( a, b, c);
    cout << ans << endl;

    return 0;
}