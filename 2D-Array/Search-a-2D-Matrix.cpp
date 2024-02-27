#include <iostream>
#include <vector>
using namespace std;

bool searcMatrix(vector<vector<int>> &matrix, int target)
{

    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0;
    int end = row * col - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        int element = matrix[mid / col][mid % col];

        if (element == target)
        {
            return 1;
        }
        if (element < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return 0;
}

//printing the 2D-Array-->
void Display(vector<vector<int>> &matrix)
{

    int n = matrix.size();
    int m = matrix[0].size();

    // 2D-Array printing->

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{

    vector<vector<int>> mat {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};

    // searcMatrix(mat);
    Display(mat);

    return 0;
}