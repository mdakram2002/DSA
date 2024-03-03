#include <iostream>
using namespace std;

int power(int a, int b){

    //base case
    if(b == 0) //if any number of power(b) is 0 then return 1, yani (b)^0 return 1
        return 1;

    if(b == 1) //if any number of pawer(b) is 1 then return number, yani (b)^1 return b;
        return a;
    //recursive call
    int ans = power(a, b/2);

    //if b is even
    if(b%2 == 0){
        return ans * ans;
    }
    else{
        return a * ans * ans;
    }
}
int main(){

    int a,b;
    cin >> a >> b;
    cout << endl;

    int ans = power(a ,b);
    cout << "Answer is: " << ans << endl;

    return 0;
}