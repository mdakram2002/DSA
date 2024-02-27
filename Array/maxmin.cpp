#include<iostream>
#include<math.h>
using namespace std;


//Max function calling--->
int getMax(int num[], int n){

    int max = INT8_MAX;

    for(int i=0; i<n; i++){
        if(num[i] < max){
            max = num[i];
        }
    }
    //retruning max values--->
    return max;

}

//Min function calling --->
int getMin(int num[], int n){

    int min  = INT8_MIN;

    for(int i=0; i<n; i++){
        if(num[i] < min){
            min = num[i];
        }
    }
    //retruning min values--->
    return min;

}

int main (){

int size;
cin>>size;

int num[100];


//taking input in array--->
for(int i=0; i<size; i++){
    cin >> num[i];
    //cout<<"Print the Array:- "<<endl;
}

cout<<"Maximun value is:- "<< getMax(num, size) <<endl;
cout<<"Minimun value is:- "<< getMin(num, size) <<endl;

    return 0;
}