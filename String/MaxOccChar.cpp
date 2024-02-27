// Question--
// Return maximum occurring charactor in an input string;

#include <iostream>
#include <string.h>
using namespace std;

char getMaxOccCharactor(string s)
{
    int arr[26] = {0};

    // create an array of count charactor
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        //LowerCase;
        int number = 0;
        if (ch >= 'a' && ch <= 'z'){
            number = ch - 'a';
        }
        else{
            //uppercase;
            number = ch - 'A';
        }
        //number = ch - 'a'; // when only mantion in question thar lowercase is include in input
        // include this comment out code in below
        arr[number]++;
    }

    // find maximum occurence of charactor
    int maxi = -1, ans = 0;

    for (int i = 0; i < 26; i++)
    {

        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    char finalAns = 'a' + ans;
    return finalAns;
}

int main()
{

    string s;
    cin >> s;

    cout << getMaxOccCharactor(s) << endl;
    return 0;
}