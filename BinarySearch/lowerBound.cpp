#include <iostream>
#include <vector>
using namespace std;

// int lowerBound(int arr[], int n, int x)
// {

//     int low = 0;
//     int high = n - 1;

//     int ans = n;
//     while (low <= high)
//     {
//         int mid = high + (low - high) / 2;

//         if (arr[mid] >= x)
//         {
//             ans = mid;
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return ans;
// }

// int main()
// {

//     int arr = {3, 5, 8, 15, 19};
//     int n = 5, x = 9;
//     int ind = lowerBound(arr, n, x);
//     cout << "The lower bound is the index: " << index << endl;
//     return 0;
// }

int lowerBound(vector<int> arr, int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= x)
        {
            // lower bound found:
            return i;
        }
    }
    return n;
}

int main()
{
    vector<int> arr = {3, 5, 8, 15, 19};
    int n = 5, x = 9;
    int ind = lowerBound(arr, n, x);
    cout << "The lower bound is the index: " << ind << endl;
    return 0;
}