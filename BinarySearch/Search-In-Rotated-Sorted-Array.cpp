#include <iostream>
#include <vector>
using namespace std;

int getPivot(vector<int> &arr, int n)
{

    int start = 0;
    int end = n - 1;

    int mid = start + (end + start) / 2;
    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int binarySearch(vector<int> &arr, int n, int key)
{

    int start = 0;
    int end = n - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int search(vector<int> &arr, int n, int k)
{

    int pivot = getPivot(arr, n);

    if (k >= arr[pivot] && k <= arr[n - 1])
    {

        return binarySearch(arr, pivot, n - 1, k);
    }
    else
    {
        binarySearch(arr, 0, pivot - 1, k);
    };
}
