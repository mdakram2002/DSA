#include <iostream>
using namespace std;

int getPivot(int arr[], int size)
{

    int start = 0;
    int end = size - 1;

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
int main()
{
    int arr[5] = {5, 22, 8, 4, 2};
    cout << "pivot element is: " << getPivot(arr, 5) << endl;
}