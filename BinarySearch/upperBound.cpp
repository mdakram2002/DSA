#include <iostream>
#include <vector>
using namespace std;

int upperBound(int arr[], int n, int x)
{

    int low = 0;
    int high = n - 1;

    int ans = n;
    while (low <= high)
    {
        int mid = high + (low - high) / 2;

        if (arr[mid] > x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{

    vector<int> = {3, 5, 8, 15, 19};
    int n = 5, x = 9;
    int index = upperBound(arr, n, x);
    cout << "The upper bound is the index: " << index << endl;
    return 0;
}


// in sort method-->
// int upperBound(vector<int> arr, int n, int x)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > x)
//         {
//             // upper bound found:
//             return i;
//         }
//     }
//     return n;
// }

// int main()
// {
//     vector<int> arr = {3, 5, 8, 9, 15, 19};
//     int n = 6, x = 9;
//     int ind = upperBound(arr, x, n);
//     cout << "The upper bound is the index: " << ind << endl;
//     return 0;
// }