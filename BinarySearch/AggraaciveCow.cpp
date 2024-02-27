#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> &stalls, int k, int mid)
{
    //process for fist cow and stor in stall[0],
    int cowCount = 1;
    int lastPoss = stalls[0];

    for (int i = 0; i < stalls.size() - 1; i++)
    {

        if (stalls[i] - lastPoss >= mid)
        {
            cowCount++;
            if (cowCount == k)
            {
                return true;
            }
            lastPoss = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{

    sort(stalls.begin(), stalls.end());

    int start = 0;
    int maxi = -1;

    for (int i = 0; i < stalls.size(); i++)
    {
        maxi = max(maxi, stalls[i]);
    }
    int end = maxi;
    int ans = -1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (isPossible(stalls, k, mid))
        {

            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}