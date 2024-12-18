// 2256. Minimum Average Difference

/*
You are given a 0-indexed integer array nums of length n.

The average difference of the index i is the absolute difference between the average of the first
i + 1 elements of nums and the average of the last n - i - 1 elements. Both averages should be
rounded down to the nearest integer.

Return the index with the minimum average difference. If there are multiple such indices,
return the smallest one.

Note:
The absolute difference of two numbers is the absolute value of their difference.
The average of n elements is the sum of the n elements divided (integer division) by n.
The average of 0 elements is considered to be 0.
*/

class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n = nums.size();

        long long sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }

        long long LS = 0;
        long long RS = 0;

        int ans = INT_MAX;
        int idx = -1;

        for (int i = 0; i < n; i++) {
            LS += nums[i];
            RS = sum - LS;

            int n1 = i + 1;
            int n2 = n - n1;

            long long leftAvg = LS / n1;
            long long rightAvg = (i == n - 1) ? 0 : RS / n2;

            int diff = abs(leftAvg - rightAvg);

            if (ans > diff) {
                ans = diff;
                idx = i;
            }
        }
        return idx;
    }
};