#include <iostream>
using namespace std;

int main()
{

    int n = 10;
    cin >> n;

    for (int row = 0; row < n; row++){
        for (int col = 0; col < n - row; col++){
            cout << col + 1 << " ";
        }
        cout << endl;
    }

    // if(cout << n){
    //     cout << "Akram" << endl;
    // }
    // Answer of the above question is 10Akram.

    // if(cin >> n){
    //     cout << "Akram" << endl;
    // }
    // Answer of the above question is input of answer and Akram.
}