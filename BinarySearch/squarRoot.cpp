// Problem statmente- Square Root-69 leetCode
/*
Given a non-negative integer x, return the square root of x rounded down
to the nearest integer. The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.
For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.


Example 1:
Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.

Example 2:
Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842...,
and since we round it down to the nearest integer, 2 is returned.
*/

#include <iostream>
using namespace std;

int sqrtIntege(int n)
{

    int start = 0;
    int end = n;

    long long int ans = -1;
    long long int mid = start + (end - start) / 2;

    while (start <= end)
    {

        long long int square = mid * mid;

        if (square == n)
            return mid;

        if (square < n)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
double morePrecision(int n, int precision, int locSol)
{

    int fector = 1;
    double ans = locSol;

    for (int i = 0; i < precision; i++)
    {

        fector = fector / 10;
        for (double j = ans; j * j < n; j + fector)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Square Root of: " << endl;
    cin >> n;

    int locSol = sqrtIntege(n);
    cout << "Answer is: " << morePrecision(n, 3, locSol) << endl;

    return 0;
}