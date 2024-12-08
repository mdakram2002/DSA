// 976. Largest Perimeter Triangle
/*
Question: Given an integer array nums, return the largest perimeter of a triangle with
a non-zero area, formed from three of these lengths. If it is impossible to form any
triangle of a non-zero area, return 0.
*/

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n = nums.size();

        sort(begin(nums), end(nums));

        for (int i = n - 3; i >= 0; i--) {
            // a + b > c = Triangle Properties
            if (nums[i] + nums[i + 1] > nums[i + 2])
                return nums[i] + nums[i + 1] + nums[i + 2];
        }
        return 0;
    }
};