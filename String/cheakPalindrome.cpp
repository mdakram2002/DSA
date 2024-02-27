#include <iostream>
#include <vector>
using namespace std;

char toLowerCase(char ch)
{

    if (ch >= 'a' && ch <= 'z')
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

int getLength(char name[])
{

    int count = 0;
    for (int i = 0; name[i] != 0; i++)
    {
        count++;
    }
    return count;
}
void reverse(char name[], int n)
{

    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

int main()
{

    char name[20];
    cout << "Enter Your name: " << endl;
    cin >> name;

    int len = getLength(name);
    cout << "Length is: " << len << endl;

    reverse(name, len);
    cout << "your name is: " << name << endl;

    cout << "cheak Palindrome IS or NOT : " << cheakPalindrome(name, len) << endl;
}