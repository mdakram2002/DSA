// 54 Spiral Matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        int topRow = 0, downRow = n - 1;
        int leftCol = 0, rightCol = m - 1;

        vector<int> result;
        while (topRow <= downRow && leftCol <= rightCol) {

            for (int i = leftCol; i <= rightCol; i++) {
                result.push_back(matrix[topRow][i]);
            }
            topRow++;
            for (int i = topRow; i <= downRow; i++) {
                result.push_back(matrix[i][rightCol]);
            }
            rightCol--;

            if (topRow <= downRow) {
                for (int i = rightCol; i>=leftCol; i--) {
                    result.push_back(matrix[downRow][i]);
                }
                downRow--;
            }
            if (leftCol <= rightCol) {
                for (int i = downRow; i >= topRow; i--) {
                    result.push_back(matrix[i][leftCol]);
                }
                leftCol++;
            }
        }
        return result;
    }
};