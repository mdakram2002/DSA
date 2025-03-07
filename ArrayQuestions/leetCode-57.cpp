// Insert Intervals



/*
You are given an array of non-overlapping intervals intervals where intervals[i] = [starti, endi]
represent the start and the end of the ith interval and intervals is sorted in ascending order
by starti. You are also given an interval newInterval = [start, end] that represents the start and
end of another interval.

Insert newInterval into intervals such that intervals is still sorted in ascending order
by starti and intervals still does not have any overlapping intervals (merge overlapping
intervals if necessary).

Return intervals after the insertion.

Note that you don't need to modify intervals in-place. You can make a new array and return it.
*/


// Brout Force Implimentation
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int i = 0;

        // Taking TC:  O(n^2)
        while (i < intervals.size()) { // O(n)
            if (intervals[i][1] < newInterval[0]) {
                i++;
            } else if (intervals[i][0] > newInterval[1]) {
                intervals.insert(intervals.begin() + i, newInterval);
                return intervals;
            } else {
                newInterval[0] = min(newInterval[0], intervals[i][0]);
                newInterval[1] = max(newInterval[1], intervals[i][1]);

                intervals.erase(intervals.begin() + i);
            }
        }
        intervals.push_back(newInterval);
        return intervals;
    }
};


// Optimal implementation
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int i = 0;

        vector<vector<int>> ans;
        int n = intervals.size();

        while (i < n) {
            if (intervals[i][1] < newInterval[0]) {
                ans.push_back(intervals[i]);

            } else if (intervals[i][0] > newInterval[1]) {
                break;
            } else {
                newInterval[0] = min(newInterval[0], intervals[i][0]);
                newInterval[1] = max(newInterval[1], intervals[i][1]);
            }
            i++;
        }
        ans.push_back(newInterval);

        while (i < n) {
            ans.push_back(intervals[i]);
            i++;
        }
        return ans;
    }
};

