#include <iostream>
using namespace std;

void merge(int *arr, int start, int end)
{

    int mid = start + (end - start) / 2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy value;
    int mainArrayIndex = start;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;

    while (index1 < len1)
    {
        arr[mainArrayIndex++] == first[index1++];
    }
    while (index2 < len2)
    {
        arr[mainArrayIndex++] == second[index2++];
    }
    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int start, int end)
{

    // base case
    if (start >= end)
    {
        return;
    }
    int mid = start + (end - start) / 2;

    // left part sort karna hai
    mergeSort(arr, start, mid);

    // right part ke liye
    mergeSort(arr, mid + 1, end);

    // merge all
    merge(arr, start, end);
}

int main()
{

    int arr[5] = {1, 2, 4, 5, 3};
    int n = 5;

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}