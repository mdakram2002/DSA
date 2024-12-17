//1293. Shortest Path in a Grid with Obstacles Elimination
// problem Statement:
/*
You are given an m x n integer matrix grid where each cell is either 0 (empty)
or 1 (obstacle). You can move up, down, left, or right from and to an empty cell in one step.

Return the minimum number of steps to walk from the upper left corner (0, 0) to
the lower right corner (m - 1, n - 1) given that you can eliminate at most k obstacles.
If it is not possible to find such walk return -1.
*/

class Solution {
public:
    vector<vector<int>> directions{{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    int shortestPath(vector<vector<int>>& grid, int k) {

        int m = grid.size();
        int n = grid[0].size();

        queue<vector<int>> que;
        int i = 0, j = 0;

        que.push({0, 0, k});

        bool visited[41][41][1601];
        memset(visited, false, sizeof(visited));

        int steps = 0;

        while (!que.empty()) {
            int size = que.size();

            while (size--) {

                vector<int> temp = que.front();
                que.pop();

                int curr_i = temp[0];
                int curr_j = temp[1];
                int abs = temp[2];

                // reached the target;
                if (curr_i == m - 1 && curr_j == n - 1)
                    return steps;

                for (vector<int>& dir : directions) {

                    int new_i = curr_i + dir[0];
                    int new_j = curr_j + dir[1];

                    if (new_i < 0 || new_i >= m || new_j < 0 || new_j >= n)
                        continue;

                    if (grid[new_i][new_j] == 0 &&
                        !visited[new_i][new_j][abs]) {

                        que.push({new_i, new_j, abs});
                        visited[new_i][new_j][abs] = true;

                    } else if (grid[new_i][new_j] == 1 && abs > 0 &&
                               !visited[new_i][new_j][abs - 1]) {

                        que.push({new_i, new_j, abs - 1});
                        visited[new_i][new_j][abs - 1] = true;
                    }
                }
            }
            steps++;
        }
        return -1;
    }
};