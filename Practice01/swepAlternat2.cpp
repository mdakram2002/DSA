#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[5] = {5, 4, 3, 2, 1};
    int n = 5;

  int temp;

  cout << "Original array: ";
  printArray(arr, n);


  // swapping first and last element
  temp = arr[0];
  arr[0] = arr[n - 1];
  arr[n - 1] = temp;

  cout << "Array with first and last element swapped: ";
  printArray(arr, n);



    return 0;
}