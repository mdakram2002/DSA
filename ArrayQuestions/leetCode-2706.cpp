#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int minPrice = INT_MAX;
        int secMinPrice = INT_MAX;

        for(int price : prices){
            if(price < minPrice){
                secMinPrice = minPrice;
                minPrice = price;
            } else if(price < secMinPrice){
                secMinPrice = price;
            }
        }

        int totalCost = minPrice + secMinPrice;
        if(totalCost > money){
            return money;
        }
        return money - totalCost;
    }
};
// int main() {
//     Solution sol;
//     vector<int> prices = {1, 2, 3};
//     int money = 3;

//     int leftover = sol.buyChoco(prices, money);
//     cout << "Leftover money: " << leftover << endl;
// }
