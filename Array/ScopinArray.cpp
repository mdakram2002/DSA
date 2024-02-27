#include<iostream>
using namespace std;

void update(int arr[], int n){

    cout<<"Inside the array:- "<<endl;

    //updating the array element,
    //that means the array of first element is 120, 
    arr[0] = {120};

    for(int i=0; i<3; i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Back to main function:- "<<endl;
}
  
//Main fuction calling 
int main(){

    int arr[3] = {1, 2, 3};
    update(arr, 3);

    cout<<"Printing the main function"<<endl;
      for(int i=0; i<3; i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;

    return 0;
} 