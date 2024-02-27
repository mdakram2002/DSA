#include <iostream>
#include <limits.h>
using namespace std;

// searching the element--
bool isPersent(int arr[][3], int target, int row, int col)
{

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (arr[row][col] == target)
            {

                return 1;
            }
        }
    }
    return 0;
}

// print sum row wise--
void printRowSum(int arr[][3], int row, int col)
{
    cout << "Row wise Element of Sum: " << endl;

    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

// print sum col wise--
void printColSum(int arr[][3], int row, int col)
{
    cout << "Col wise Element of Sum: " << endl;

    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int largestRowSum(int arr[][3], int row, int col)
{

    int max = INT_MIN;
    int rowIndex = -1;

    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        if (sum > max)
        {
            max = sum;
            rowIndex = row;
        }
    }
    cout << "the maximum sum is: " << max << endl;
    return rowIndex;
}

int main()
{

    int arr[3][3];

    // 2D Array creatation --

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }

    // printing the 2D Array--

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    cout << "Enter the Element to search: " << endl;
    int target;
    cin >> target;

    if (isPersent(arr, target, 3, 3))
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    printColSum(arr, 3, 3);
    printRowSum(arr, 3, 3);

    int ansIndex = largestRowSum(arr, 3, 3);
    cout << "Max row is at index: " << ansIndex << endl;

    return 0;
}