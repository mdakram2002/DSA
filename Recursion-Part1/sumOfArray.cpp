#include<iostream>
using namespace std;

int getSum(int arr[], int n){

    //base case;
    if(n == 0)
        return 0;
    
    if(n == 1){
        return arr[0];
    }

    //recursive relation
    int remainingPart = getSum(arr+1, n-1);
    int sum = arr[0] + remainingPart;

    //processing
    return sum;
}

int main(){

    int arr[5] = {1,2,3,4,5};
    int n = 5;

    int sum = getSum(arr, n);
    cout << "Sum is: " << sum << endl;

    return 0;
}