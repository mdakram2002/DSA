#include<iostream>
using namespace std;

void print(int arr[], int n){

    cout << "size of array is: " << n << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool linearSearch(int arr[], int n, int key){
    print(arr, n);
    //base case
    if(n == 0){
        return false;
    }
    //recursive relation
    if(arr[0] == key){
        return true;
    }
    else{
        bool restPart = linearSearch(arr+1, n-1, key);
        return restPart; //processing
    }
}
int main(){

    int arr[6] = {1,2,3,4,5,7};
    int n = 6;
    int key = 7;

    bool keyIsPresent = linearSearch(arr, n, key);

    if(keyIsPresent){

        cout << "Key is persent: " << keyIsPresent << endl;
    }
    else{
        cout << "Key is absent: " << endl;
    }

    return 0;
}