#include<iostream>
using namespace std;

void findMissing(int *a, int n){
    // visited method

    for(int i=0; i<n; i++){
        int index = abs(a[i]);
        if(a[index -1] > 0){
            a[index - 1] *= -1;
        }
    }

    // printing visited array with negative marked;
    // for(int i=0; i<n; i++){
    //     cout<<a[i]<< " ";
    // }

    // all postive index are missing from an array
    for(int i=0; i<n; i++){
        if(a[i] > 0){
            cout << i+1 << " ";
        }
        cout << endl;
    }

    // int i = 0;
    // while(i<n){
    //     int index = a[i] - 1;
    //     if(a[i] != a[index]){
    //         swap(a[i], a[index]);
    //     } else{
    //         i++;
    //     }

    //     // for(int i=0; i<n; i++){
    //     //     cout << a[i]<< " ";
    //     // }
    //     // cout << endl;

    //     for(int i=0; i<n; i++){
    //         if(a[i] != i+1){
    //             cout<< i+1 << " ";
    //         }
    //     }
    //     cout <<endl;
    // }
}

int main(){

    int a[] = {1,3,5,3,4};
    int n = sizeof(a)/sizeof(int);

    findMissing(a, n);

    return 0;
}