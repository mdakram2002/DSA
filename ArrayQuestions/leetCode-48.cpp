// 48-Rotate Image

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for(int i=0; i<n; i++){
            for(int j=i; j<matrix[i].size(); j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Reverse 2D matrix, for row wise
        for(int i=0; i<n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }

    }
};
