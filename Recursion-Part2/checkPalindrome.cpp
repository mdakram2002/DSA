#include <iostream>
using namespace std;

bool checkPalindrome(string str, int start, int end){

    //base case
    if(start > end)
        return true;

    if(str[start] != str[end]){
        return false;
    }
    else{
        //recursive call
        return checkPalindrome(str, start + 1, end - 1);
    }
}
int main(){

    string name = "akram";
    cout << endl;
    bool ans = checkPalindrome(name, 0, name.length()-1);

    if(checkPalindrome){
        cout << "It is a Palindrome: " << ans << endl;
    }
    else{
        cout << "It is not a Palindrme: " << endl;
    }

    return 0;
}