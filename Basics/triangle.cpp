#include <iostream>
using namespace std;

int checkTriangle(int a, int b, int c){
    if(a+b > c && b+c > a && c+a > b){
        cout << "this is a triangle" << endl;
    }
    else {
        cout << "this is not a triangle" << endl;
    }
}
int main(){

    int a,b,c;
    cin >> a >> b >> c;

    int ans = checkTriangle(a,b,c);
    cout << ans << endl;

    return 0;
}