#include<iostream>
using namespace std;

void print(int arr[], int start, int end){

    for(int i=start; i<=end; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binarySearch(int *arr, int start, int end, int key ){

    cout << endl;
    print(arr, start, end);

    //base case and element not found
    if(start > end){
        return false;
    }

    int mid =  start + (end - start)/2;
    cout << "Value of mid is: " << arr[mid] << endl;

    //element found
    if(arr[mid] == key){
        return true;
    }

    if(arr[mid] < key){
        return binarySearch(arr, mid+1, end, key);
    }
    else{
        return binarySearch(arr, start, mid-1, key);

    }

}

int main(){

    int arr[9] = {11,22,31,42,52,63,77,87,90};
    int size = 9;
    int key = 90;
    
    cout << "key is Parsent or not: " << binarySearch(arr, 0 ,8, key) << endl;
    cout << endl;
    return 0;
}