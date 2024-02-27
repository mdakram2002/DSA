#include<iostream>
using namespace std;

void printArray(int arr[], int size){

    int ans = ans + size;
    for(int i=0; i<size; i++){
        cout<<ans<<" ";
        
    }
    cout<<endl;
}

int main (){


    int arr[5] = {2, 4, 5, 6, 7};
    printArray(arr, 5);

    cout<<"print the addition of array:- "<< arr <<endl;

    
    return 0;
}