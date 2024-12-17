// 835. Image Overlap
/*
You are given two images, img1 and img2, represented as binary, square matrices of size n x n.
A binary matrix has only 0s and 1s as values.

We translate one image however we choose by sliding all the 1 bits left, right, up, and/or down
any number of units. We then place it on top of the other image. We can then calculate the overlap by counting the number of positions that have a 1 in both images.

// Note also that a translation does not include any kind of rotation. Any 1 bits that are translated
outside of the matrix borders are erased.

Return the largest possible overlap.
*/



class Solution {
public:
    int countOverlaps(vector<vector<int>>& A, vector<vector<int>>& B, int rowOff, int colOff) {

        int n  = A.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0;  j< n; j++) {
                // find indices of B From A to indices [i][j]

                int B_i = i + rowOff;
                int B_j = j + colOff;

                if (B_i < 0 || B_i >= n || B_j < 0 || B_j >= n)
                    continue;

                if (A[i][j] == 1 && B[B_i][B_j] == 1)
                    count++;
            }
        }
        return count;
    }
    int largestOverlap(vector<vector<int>>& A, vector<vector<int>>& B) {

        int n = A.size();
        int maxOverlap = 0;

        for (int rowOff = -n + 1; rowOff < n; rowOff++) {
            for (int colOff = -n + 1; colOff < n; colOff++) {

                int count = countOverlaps(A, B, rowOff, colOff);
                maxOverlap = max(maxOverlap, count);
            }
        }
        return maxOverlap;
    }
};