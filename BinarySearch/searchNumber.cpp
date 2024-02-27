#include <iostream>
#include <vector>
using namespace std;

//logic-->
int search(vector<int> &nums, int target)
{

    int start = 0;
    int end = nums.size() - 1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;
        int m = nums[mid];

        if (m == target)
        {
            return mid;
        }
        if (target > m)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{

    // int key[6] = {1, 3, 4, 5, 6, 7};
    // long long target = search(key, 6);

    // cout << "the target is: " << target << endl;

    // return 0;
}
