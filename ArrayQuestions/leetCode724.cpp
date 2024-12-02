// 724 - find Pivot Index

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();

        int sum = 0;
        for (int& x : nums) {
            sum += x;
        }
        int camSum = 0;
        for (int i = 0; i < n; i++) {

            int leftSum = camSum;
            int rightSum = sum - camSum - nums[i];

            if (leftSum == rightSum)
                return i;

            camSum += nums[i];
        }
        return -1;
    }
};