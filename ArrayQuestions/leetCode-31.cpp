// Next Permutation

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();

        int golaOfIndex = -1;
        for (int i = n - 1; i > 0; i--) {
            if (nums[i] > nums[i - 1]) {
                golaOfIndex = i - 1;
                break;
            }
        }

        if (golaOfIndex != -1) {
            int swapIndex = golaOfIndex;

            for (int j = n - 1; j >= golaOfIndex; j--) {
                if (nums[j] > nums[golaOfIndex]) {
                    swapIndex = j;
                    break;
                }
            }
            swap(nums[golaOfIndex], nums[swapIndex]);
        }
        reverse(nums.begin() + golaOfIndex + 1, nums.end());
    }
};