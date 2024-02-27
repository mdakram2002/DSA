#include <iostream>
#include <vector>
using namespace std;

bool valid(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        ||
            (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')
        {
            return 0;
        };
}
char toLowerCase(char ch)
{

    if (ch >= '0' && ch <= '9')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool cheakPalindrome(char arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        // if (toLowerCase(arr[start]) != toLowerCase(arr[end]))
        if (arr[start] != arr[end])
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
        return 1;
    }
}

bool isPalindrome(string s)
{
    string temp = "";
    for (int j = 0; j < s.length(); j++)
    {
        if (valid(s[j]))
        {
            temp.push_back(s[j]);
        }
    }
    for (int j = 0; j < temp.length(); j++)
    {
        temp[j] = toLowerCase(temp[j]);
    }
    return cheakPalindrome(temp);
}