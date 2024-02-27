#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "printing the Array" << endl;
    // printing the array,
    for (int i = 1; i < size; i++)
    {
        cout << arr[i] << " ";
    }
};

int main()
{
    // initializing the element with the random variable;
    int first[10] = {1, 2, 3, 4};
    int n = 10;
    printArray(first, 10);
    cout << endl;
    cout << "printing DONE" << endl;

    // initializing the all element with 0;
    int second[10] = {0};
    int m = 10;
    printArray(second, m);
    cout << endl;

    // initializing the all element with 1, [not possible with all elment is 1;]
    int third[10] = {1};

    int p = 10;
    // printing the Array,
    // printArray(third, p); //not initialize with the 1; bez of from the array i = 1;
    for (int i = 0; i < p; i++)
    {
        cout << third[i] << " ";
    }

    return 0;
}
