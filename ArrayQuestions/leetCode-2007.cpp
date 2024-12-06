//2007. Find Original Array From Doubled Array
/*
Q. Statement: An integer array original is transformed into a doubled array changed by
appending twice the value of every element in original, and then randomly shuffling the
resulting array.

// Given:
Given an array changed, return original if changed is a doubled array. If changed is not a
doubled array, return an empty array. The elements in original may be returned in any order.
*/

class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n = changed.size();

        // handle the odd length of array;
        if (n % 2 != 0) {
            return {};Given an integer array nums, return true if there exists a triple of indices (i, j, k) such that i < j < k and nums[i] < nums[j] < nums[k]. If no such indices exists, return false.
        }

        sort(begin(changed), end(changed));

        map<int, int> mp;

        // stor the frequency of every number in the array
        for (int& num : changed) {
            mp[num]++;
        }

        vector<int> result;

        for (int& num : changed) {
            int twice = 2 * num;

            if (mp[num] == 0)
                continue;

            if (mp.find(twice) == mp.end() || mp[twice] == 0) {
                return {};
            }
            result.push_back(num);
            mp[num]--;
            mp[twice]--;
        }
        return result;
    }
};