#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> num, vector<int> output, int index, vector<vector<int>>& ans){
    //bse case
    if(index >=  num.size()){
        ans.push_back(output);
        return;
    }
    //exclude case
    solve(num, output, index+1, ans);

    //include case
    int element = num[index];
    output.push_back(element);
    solve(num, output, index+1, ans);

}

vector<vector<int>> subset(vector<int>& num){

    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;

    solve(num, output, index, ans);
    return ans;
}
