#include <iostream>
using namespace std;

// when again again function calling then use inline funtion bcz of
// when funcion call after all program is executed then again function
// is called that's why we use inline funtion
inline int getMax(int& a, int& b){

    return (a > b) ? a : b;
}
int main(){

    int a = 1, b = 5;
    int ans = 0;

    ans = getMax(a, b);
    cout << ans << endl;

    a++;
    b++;

    ans = getMax(a, b);
    cout << ans << endl;

    return 0;
}