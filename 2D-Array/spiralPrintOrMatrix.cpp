#include<iostream>
#include<vector>
using namespace std;

vector<int> SpiralMatrix(vector<vector<int>> & matrix){
    vector<int> ans;

    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total = row*col;
    
    //indexes initiallisation-->
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while(count < total){
        
        //printing the starting row
        for(int index=startingCol; count < total && index<endingCol; index++){
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;
        //printing the ending col;
        for(int index=startingRow; count < total && index<endingRow; index++){
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;
        //printing the ending row;
        for(int index=endingCol; count < total && index>=startingCol; index--){
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;
        //printing the starting col;
        for(int index=endingRow; count < total && index>=startingRow; index--){
            ans.push_back(matrix[index][startingCol]);
            count;
        }
        startingCol++;

    }
    return ans;

}
int main(){

    int size = 9;
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    // // creating 2D-Array--
    // for (int row=0; row<3; row++){
    //     for (int col=0; col<3; col++){
    //         cin >> arr[row][col];
    //     }
    // }
    // // printing the 2D-Array--
    // for (int row=0; row<3; row++){
    //     for (int col=0; col<3; col++){
    //         cout << arr[row][col] << " ";
    //     }
    //     cout << endl;
    // }

    // SpiralMatrix(arr, size);
}