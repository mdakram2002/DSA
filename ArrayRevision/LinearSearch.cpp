#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target){
    for (int i = 0; i < n; i++){
        if (arr[i] == target)
        return target;

    }
}

int main()
{

    int arr[5] = {0, 1, 2, 3, 4};
    int size = 5;
    int target = 3;
    cout << "HERE IS TARGET VALUES" << linearSearch(arr, size, target) << endl;

    return 0;
}