#include <iostream>
#include <vector>
using namespace std;

bool selectionSort(vector<int>& arr, int n){
    
    for(int i=0; i<n-1; i++){
        int minIndex = i;

        for(int j=i+1; j<n; j++){
            if(arr[i] < arr[minIndex]);

            minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}
int main(){

    int arr[] = {5,3,6,9};
    int size = 4;

    // bool ans = selectionSort(arr ,size);
    // cout << "Sorted Array is: " << ans << endl;

    return 0;
}