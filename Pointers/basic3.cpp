#include <iostream>
using namespace std;

int main()
{

    int arr[10] = {1, 2, 3, 4, 56, 7, 33, 44, 56, 55};

    cout << "Address of arr bock of Array : " << arr << endl;
    cout << "Address of zero bock of Array : " << &arr[0] << " and value is : " << arr[0] << endl;
    cout << "Address of first bock of Array : " << &arr[1] << " and value is : " << arr[1] << endl;
    cout << "Address of second bock of Array : " << &arr[2] << " and value is : " << arr[2] << endl;
    cout << "Address of third bock of Array : " << &arr[3] << " and value is : " << arr[3] << endl;
    cout << "Address of fourth bock of Array : " << &arr[4] << " and value is : " << arr[4] << endl;
    cout << "Address of fifth bock of Array : " << &arr[5] << " and value is : " << arr[5] << endl;
    cout << "Address of sixth bock of Array : " << &arr[6] << " and value is : " << arr[6] << endl;
    cout << "Address of seventh bock of Array : " << &arr[7] << " and value is : " << arr[7] << endl;
    cout << "Address of eight bock of Array : " << &arr[8] << " and value is : " << arr[8] << endl;
    cout << "Address of nine bock of Array : " << &arr[9] << " and value is : " << arr[9] << endl;
    cout << endl;

    // pointer ke sath khela hobbe edher ----

    cout << "2nd : " << *arr + 1 << endl;
    cout << "3nd : " << *(arr + 1) << endl;
    cout << "4nd : " << (*arr) + 1 << endl;
    cout << "5nd : " << (*arr)++ << endl;
    cout << "6nd : " << *arr + 0 << endl;

    cout << "7nd : " << *arr << endl;
    cout << "address of 0th index is : " << &arr[0] << endl;
    cout << "address of 0th index + 1 is : " << &arr[0] + 1 << endl;
    cout << "9nd : " << (*arr) + 1 << endl;
    cout << "00nd : " << (*arr)++ << endl;
    cout << "address of 0th index + 10 is : " << &arr[0] + 10 << endl;

    cout << endl;

    return 0;
}