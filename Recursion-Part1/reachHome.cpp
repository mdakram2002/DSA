#include<iostream>
using namespace std;

void reachHome(int src, int dest){

    cout << "Source: " << src << " Desination: " << dest << endl;
    //base case
    if(src == dest){

        cout << "Home Coming" << endl;
        return ;
    }
    //processing, 1 step going for destination
    src++;

    //recusive call;
    reachHome(src, dest);

    
}
int main(){

    int dest = 10;
    int src = 1;

    cout << endl;
    reachHome(src, dest);

    return 0;
}
