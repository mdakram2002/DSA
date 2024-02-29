#include <iostream>
using namespace std;

int print(int arr[], int n, int start = 0){

    for(int i= start; i<n; i++){
        cout << arr[i] << " ";
    }
    
}

int main(){

    int arr[6] = {1,2,3,4,5,6};
    int size = 6;

    print(arr, size);

    cout << endl;
    print(arr, size, 2);

    return 0;
}