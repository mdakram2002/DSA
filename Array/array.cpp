#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"ptinting the array" <<endl;
    cout<<endl;
    //printing array-->
    for(int i=1; i<size; i++){
        cout<<arr[i]<< " ";
    }
    cout<<"printing DONE"<<endl;
    cout<<endl;
}

int main (){

//initilizing the array with random number;
int first[10] = {12, 44, 55};
int n = 10;
printArray(first, 10);


//initilizing the array with 0;
int second[15] = {0};
int m = 15;
printArray(second, 15);


//initilizing the array with 1;
int third[12] = {1};
int p = 12;
printArray(third, 12);


//sizeof--->
int firstsize = sizeof(first)/sizeof(int);
cout<<"print the size of third :- "<< firstsize <<endl;
cout<<endl;

int secondsize = sizeof(second)/sizeof(int);
cout<<"print the size of third :- "<< secondsize <<endl;
cout<<endl;

int thirdsize = sizeof(third)/sizeof(int);
cout<<"print the size of third :- "<< thirdsize <<endl;
cout<<endl;

char ch[5] = {'a', 'd', 'f', 'g', 'h'};
//cout<<"print the index of [3] is:- " << ch[3] <<endl;

for(int i=1; i<=5; i++){
    cout<<ch[i]<<" ";
}
cout<<"printing DONE"<<endl;

cout<<endl;
cout<<"Everything is fine:- "<<endl;
cout<<endl;
    return 0;
}