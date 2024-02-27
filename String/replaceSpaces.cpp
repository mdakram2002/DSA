#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

string replaceSpaces(string &str)
{

    string temp = "";

    for (int i = 0; i < str.length(); i++){
        if (str[i] == ' '){

            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
            // multi-character character constant is dosn't allowed in a single ' ';
            //like this temp.push_back('@40');
        }
        else{

            temp.push_back(str[i]);
        }
    }
    return temp;
}

int main()
{

    string str = "My Name Is KHAN";
    cout << replaceSpaces(str);

    return 0;
}