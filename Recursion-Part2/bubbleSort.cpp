#include <iostream>
using namespace std;

void sortArray(int *arr, int n)
{
    // base case
    if (n == 0 || n == 1)
    {
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {

        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    // recursive call
    sortArray(arr, n - 1);
}
int main()
{

    int arr[5] = {1, 9, 2, 4, 1};
    int size = 5;

    sortArray(arr, size);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}