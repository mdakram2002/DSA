#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{

    int start = 0;
    // if i want to reverse an element after 2 element
    //  then int start = 2 and so on,
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[], int n)
{
    // printing the array;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{

    int arr[5] = {2, 4, 6, 8, 10};
    int brr[6] = {1, 3, 5, 7, 9, 11};

    reverse(arr, 5);
    reverse(brr, 6);

    printArray(arr, 5);
    printArray(brr, 6);

    return 0;
}