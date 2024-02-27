/*Problem Statement

    You have been given a sorted array /
    list 'arr' consisting of 'n' elements.You are also given an integer 'k

    Now,
    your task is to find the first and last occurrence of 'k' in 'arr'.

    Note :

    1. If 'k' is not present in the array,
    then the first and the last occurrence will be - 1.
    2. 'arr'may contain duplicate elements.
*/

#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key)
{

    int start = 0;
    int end = n - 1;
    int ans = -1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        { // righy jao
            start = mid + 1;
        }
        else if (key < arr[mid])
        { // left jao
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int lastOcc(int arr[], int n, int key)
{

    int start = 0;
    int end = n - 1;
    int ans = -1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        { // righy jao
            start = mid + 1;
        }
        else if (key < arr[mid])
        { // left jao
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int odd[8] = {1, 2, 3, 3, 3, 3, 3, 4};
    cout << "First occcurence of 3 at index: " << firstOcc(odd, 8, 3) << endl;
    cout << "Last occcurence of 3 at index: " << lastOcc(odd, 8, 3) << endl;

    //total number of occurrence of any arr:-
    int total = (lastOcc(odd, 8, 3) - firstOcc(odd, 8, 3)) + 1;
    cout << "total occurrence of 3 is: " << total << endl;
}