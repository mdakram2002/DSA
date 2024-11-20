// 15. 3 Sum


class Solution {
public:
    vector<vector<int>> result;
    void twoSum(vector<int>& nums, int target, int i, int j) {

        while (i < j) {
            if (nums[i] + nums[j] > target) {
                j--;

            } else if (nums[i] + nums[j] < target) {
                i++;
            } else {
                // first we will remove the duplicates from either end(i, j);
                while (i < j && nums[i] == nums[i + 1])
                    i++;

                while (i < j && nums[j] == nums[j - 1])
                    j--;

                result.push_back({-target, nums[i], nums[j]});
                i++;
                j--;
            }
        }
    }

    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();

        if (n < 3) {
            return {};
        }
        result.clear();

        // Shorting the array->
        sort(begin(nums), end(nums));

        // Optimization
        // {2, 3, 1, 5, 6, -4, -2}
        // i traverse less than equal to n-3


        // fixing one element like n1
        for (int i = 0; i <= n - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            int n1 = nums[i];
            int target = -n1;

            // it will find the n2 and n3 from (n1, n2, n2);
            twoSum(nums, target, i + 1, n - 1);
        }
        return result;
    }
};