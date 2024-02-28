#include <iostream>
using namespace std;

int getSum(int *arr, int n)
{

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{

    int n;
    cout << "Enter size of input: " << endl;
    cin >> n;

    // variable size Array;
    int *arr = new int[n];

    // taking input in Array
    cout << "Enter input: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = getSum(arr, n);
    cout << "answer is: " << ans << endl;

    return 0;
}