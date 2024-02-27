#include <iostream>
#include <string.h>
using namespace std;

string removeAllOccurence(string str, string part)
{
    while (str.length() != 0 && str.find(part) < str.length())
    {
        str.erase(str.find(part), part.length());
    }
    return str;
}

int main()
{

    string str = "daabcbaabcbc";
    // cout << removeAllOccurence(str);

    return 0;

}