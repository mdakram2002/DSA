#include<iostream>
using namespace std;
int main(){

    int myArray[]= {2, 8, 4, 3, 5};
    int size = 5;
    int largest = size-1;
    int Slargest= -1;

    for(int i=size-2; i>=0; i--){
       if(myArray[i] != largest){
        Slargest = myArray[i];
       }
       break;
       cout<<Slargest;
    }
    cout<<"printing DONE"<<endl;


}