// Remove all adjacent duplicates in string

#include <iostream>
#include <string>
using namespace std;

string removeDuplicates(string s)
{
    string ans = "";
    int index = 0;

    while (index < s.length())
    {
        // same ans of right most char and string s of current char
        if (ans.length() > 0 && ans[ans.length() - 1] == s[index])
        {
            ans.pop_back();
        }
        else
        {
            ans.push_back(s[index]);
        }
        index++;
    }
    return ans;
}

int main()
{
    string s = "abbxxy";
    int length = 6;

    cout << removeDuplicates(s) << endl;
}