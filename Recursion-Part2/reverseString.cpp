#include <iostream>
using namespace std;

void reverseString(string& str, int i, int j){

    //For batter understanding:-
    cout << "call recieved: " << str << endl;

    //base case 
    if(i > j){
        return;
    }
    swap(str[i++] , str[j--]);
       
    //reversive call
    reverseString(str, i, j);

}
int main(){

    string name = "akramshaikh";
    cout << endl;

    reverseString(name, 0, name.length()-1);

    cout << endl;
    cout << "Reverse String is: " << name << endl << endl;

    return 0;
}