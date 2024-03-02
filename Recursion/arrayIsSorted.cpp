#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){

    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }

    bool remaningPart = isSorted(arr + 1, size - 1);
    return remaningPart;

}

int main(){

    int arr[5] = {1,3,2,7,9};
    int size = 5;

    bool ans = isSorted(arr, size);
    if(ans){
        cout << " Array is Sorted: " << endl;
    }
    else{
        cout << " Array is not Sorted: " << endl;
    }


    return 0;
}