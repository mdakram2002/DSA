/*
Naive Approach (Brute force):-

One straightforward approach we can consider is using the linear search
algorithm. Using this method, we will traverse the array to find the
location of the target value. If it is found we will simply return the
index and otherwise, we will return -1.

Algorithm:
We will traverse the array and check every element if it is equal to
k. If we find any element, we will return its index.
Otherwise, we will return -1.

Optimal Approach(Using Binary Search):-
Algorithm:
The steps are as follows:-

step_1* Place the 2 pointers i.e. low and high: Initially, we will place the
pointers like this:
low will point to the first index, and high will point to the last index.

step_2* Calculate the ‘mid’: Now, inside a loop, we will calculate the value of
‘mid’ using
the following formula:

mid = (low+high) // 2 ( ‘//’ refers to integer division)

step_3* Check if arr[mid] == target:
If it is, return the index mid.

4* Identify the sorted half, check where the target is located, and then eliminate
one half accordingly:

step_4-1*
If arr[low] <= arr[mid]:
This condition ensures that the left part is sorted.

If (arr[low] <= target && target <= arr[mid])

It signifies that the target is in this sorted half.
So, we will eliminate the right half (high = mid-1).

Otherwise, the target does not exist in the sorted half.
So,we will eliminate this left half by doing (low = mid+1)

step_4-2*
Otherwise, if the right half is sorted:

If (arr[mid] <= target && target <= arr[high])

It signifies that the target is in this sorted right half. So,
we will eliminate the left half (low = mid+1).

Otherwise, the target does not exist in this sorted half. So,
we will eliminate this right half by doing high = mid-1.

step_5* Once, the ‘mid’ points to the target, the index will be returned.
This process will be inside a loop and the loop will continue until
low crosses high. If no index is found,we will
return -1.
*/

#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> &arr, int n, int key)
{

    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[start] <= arr[mid])
        {
            if (arr[start] <= key && key <= arr[mid])
            {
                start = mid - 1;
            }
            else
            {
                end = mid + 1;
            }
        }
        else
        {
            if (arr[mid] <= key && key <= arr[end])
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {7, 8, 9, 1, 2, 3, 4, 5, 6};
    int n = 9, k = 1;
    int ans = search(arr, n, k);
    if (ans == -1)
    {
        cout << "Target is not present." << endl;
    }

    else
    {
        cout << "The index is: " << ans << endl;
        ;
    }

    return 0;
}