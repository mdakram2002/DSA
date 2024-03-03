#include <iostream>
#include <vector>
using namespace std;

bool bubbleSort(vector<int>& arr, int n){

    for(int i=0; i<n; i++){
        //for round 1 to n;
        
        bool swapped = false;
        for(int j=0; j<n-1; j++){
            
            //process element till (n-i)th index
            if(arr[i] > arr[j+1]){
                swap(arr[i], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped = false){
            //already sorted array
            break;
        }
    }
}
int main(){

    int arr[] = {5,3,6,9};
    int size = 4;

    // bool ans = bubbleSort(arr ,size);
    // cout << "Sorted Array is: " << ans << endl;

    return 0;
}