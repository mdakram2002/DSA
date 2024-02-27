#include <iostream>
#include <vector>
using namespace std;

void rotateMatrix(vector<vector<int>> &matrix)
{

    int n = matrix.size();
    int m = matrix[0].size();

    vector<vector<int>> new_Matrix(m, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            new_Matrix[j][n - 1 - i] = matrix[i][j];
        }
    }
    matrix = new_Matrix; // new_Matrix ko matrix me store kar diya;
}

void Display(vector<vector<int>> &matrix)
{

    int n = matrix.size();
    int m = matrix[0].size();

    // 2D-Array printing-
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{

    vector<vector<int>> mat{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    rotateMatrix(mat);
    Display(mat);

    // successfully run code;

    return 0;
}