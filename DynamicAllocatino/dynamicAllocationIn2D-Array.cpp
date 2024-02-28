#include <iostream>
using namespace std;

int main()
{

    int row;
    cout << "Enter the Size of an Array: " << endl;
    cin >> row;

    int col;
    cin >> col;

    // creating a 2D-Array: using dynamic memory allocation
    int **arr = new int *[row];
    for (int i=0; i<row; i++){
        arr[i] = new int[col];
    }

    // taking input in 2D-Array:
    cout << "Enter the input of array: " << endl;
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            cin >> arr[i][j];
        }
    }

    // taking output in 2D-Array:
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //releasing memory:
    cout << "Releasing the memory of Array DONE: "<<endl;
    for (int i=0; i<row; i++){
        delete [] arr[i];
    }
    delete []arr;


    return 0;
}