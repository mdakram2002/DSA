#include <iostream>
using namespace std;

int main (){

    // outer loop for rows
    for(int i=0; i<3; i++){
        
        // for columns
        for (int j=0; j<6; j++){
            cout << "* ";
        }
        cout << endl;
    }
}