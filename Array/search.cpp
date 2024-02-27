#include<iostream>
using namespace std;

//function creating-->
bool search(int arr[], int size, int key){
    for(int i=1; i<size; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){

    int arr[10] = {12, 3, 4, 5, -5, 6, 7, 8, 1, 0};
    cout<<"Enter the element search for"<<endl;

    int key;
    cin>>key;


    bool found = search(arr, 10, key);

    if(found){
        cout<<"key is persent"<<endl;
    }
    else{
        cout<<"key is absent"<<endl;
    }
    

    return 0;
}