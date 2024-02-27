#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

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

int main()
{

    int even[6] = {11, 33, 22, 44, 55, 66};
    int evenindex = binarySearch(even, 6, 55);
    cout << "index of 55: " << evenindex << endl;

    int odd[5] = {1, 2, 3, 4, 5};
    int oddindex = binarySearch(odd, 5, 2);
    cout << "index of 2: " << oddindex << endl;

    return 0;
}