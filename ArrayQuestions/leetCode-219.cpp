//219. Contains Duplicate II

/*
Given an integer array nums and an integer k, return true if there are two distinct indices
i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.

Example 1:
Input: nums = [1,2,3,1], k = 3
Output: true

Example 2:
Input: nums = [1,0,1,1], k = 1
Output: true
*/
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;


       for (int i = 0; i < n; i++) {
            if (mp.find(nums[i]) != mp.end() && abs(mp[nums[i]] - i) <= k) {
                return 1;
            } else {
                mp[nums[i]] = i;
            }
        }
       return 0;
    }
};