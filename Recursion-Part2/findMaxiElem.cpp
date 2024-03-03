#include<iostream>
#include<math.h>
using namespace std;

bool findMax(int arr[], int i, int size, int& max){

    int  max = INT8_MIN;
    //base case
    if(i == size)
        return;

    //processing
    if(arr[i] > max){
        return max;
    }
    
    //recursive relation
    findMax(arr, i+1, size, max);
}
int main(){


    int arr[6] = {2,4,5,7,8,9};
    int size = 6;

    // bool ans = findMax(arr, size);
    // cout << ans << endl;

    return 0;
}