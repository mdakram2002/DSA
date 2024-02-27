/*Problem Statement

Ayush is studying for ninjatest which will be held after 'N' days. And to score
good marks he has to study 'M' chapters and the ith chapter requires TIME[]
seconds to study. The day in Ayush's world has 100/100 seconds. There are
some rules that are followed by Ayush while studying. 1. He reads the chapter
in a sequential order, i.e. he studies i+1th chapter only after he studies ith

chapter.

2. If he starts some chapter on a particular day he
3. He wants to distribute his workload over 'N' days,

so he wants to minimize the maximum amount of

time he studies in a day.

Your task is to find out the minimal value of the maximum amount of time for
which Ayush studies in a day, in order to complete all the 'M' chapters in no
more than 'N' days.

For example

if Ayush want to study 6 chapters in 3 days and the time that each chapter
requires is as follows:

Chapter 1 = 30
Chapter 2 = 20
Chapter 6 = 10
Chapter 5 = 5
Chapter 6 = 45
*/

#include <iostream>
#include <vector>
using namespace std;

bool isPossibal(vector<int> arr, int n, int m, int mid)
{

    int coutStudent = 1;
    int sumofPages = 0;
    for (int i = 0; i < n; i++)
    {
        if (sumofPages + arr[i] <= mid)
        {
            sumofPages += arr[i];
        }
        else
        {
            coutStudent++;
            if (coutStudent > m || arr[i] > mid)
            {
                return false;
            }
            sumofPages = arr[i];
        }
    }
    return true;
}

int booksAllocated(vector<int> arr, int n, int m)
{

    int start = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int end = sum;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (isPossibal(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    // int num = {113, 100};
    // cout << isPossibal(booksAllocated(num)) << end;
    // // wrong input method, try to right take input
}