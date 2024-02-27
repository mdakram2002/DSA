#include<iostream>
#include<vector>
using namespace std;

bool searcMatrix2(vector<vector<int>> & matrix, int target){

    int row = matrix.size();
    int col = matrix[0].size();

    int rowIndex = 0;
    int colIndex = col - 1;

    while( rowIndex < row && colIndex >= 0){

        int element = matrix[rowIndex][colIndex];
        if(element == target){
            return 0;
        }
        if(element < target){
            rowIndex++;
        }
        else{
            colIndex--;
        }
        return 0;

    }
}

//printing the 2D-Array-->
void Display(vector<vector<int>> &matrix)
{

    int n = matrix.size();
    int m = matrix[0].size();

    // 2D-Array printing-
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main(){

    vector<vector<int>> mat {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};

    // searcMatrix2(mat);
    Display(mat);

    return 0;
}