/*
Problem Statmente:-
852. Peak Index in a Mountain Array. {LeetCode}

Let's call an array arr a mountain if the following properties hold:

arr.length > 3

There exists some i with 0 < i < arr.length - 1 such that:

arr[0] < arr[1] <... arr[i-1] < arr[i]
arr[i] > arr[i+1] > ... > arr[arr.length - 1]

Given an integer array arr that is guaranteed to be a mountain, return any i
such that arr[0] < arr[1] <... arr[i - 1] < arr[i]> arr[i + 1] > ... >

arr[arr.length-1].
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[5] = {0, 1, 5, 0, 0};

    int start = 0;

    int length = 0;

    int end = length - 1;
    //int end = arr.length() - 1;

    int mid = (start + (end - start) / 2);

    while (start < end)
    {

        if (arr[mid] < arr[mid + 1])
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