#include <iostream>
using namespace std;

//swap code is here:
void reverseArray(int arr[], int size)
{

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[], int size)
{
    // printing the array,
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[6] = {1, 3, 4, 5, -7, 44};
    int brr[5] = {2, 34, 55, 6, 7};

    reverseArray(arr, 6);
    reverseArray(brr, 5);

    printArray(arr, 6);
    cout << endl;
    printArray(brr, 5);

    return 0;
}