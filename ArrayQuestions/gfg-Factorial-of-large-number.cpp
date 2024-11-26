// Factorial Of Large Numbers;

class Solution{
public:
    void multiply(vector<int> &arr, int &size, int mult){

        int carry = 0;
        for (int i = 0; i < size; i++) {
            int res = mult * arr[i] + carry;
            arr[i] = res % 10;
            carry = res / 10;
        }
        while (carry > 0){
            arr[size] = carry % 10;
            size++;
            carry = carry / 10;
        }
    }
    vector<int> factorial(int n){
        vector<int> arr(10000, 0);
        arr[0] = 1;
        int size = 1;
        for (int mult = 2; mult <= n; mult++) {
            multiply(arr, size, mult);
        }
        vector<int> result;
        for (int i = size - 1; i >= 0; i--){
            result.push_back(arr[i]);
        }
        return result;
    }
};