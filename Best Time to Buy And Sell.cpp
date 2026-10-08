#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>


class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int min_price = INT_MAX;
        int max_profit = 0;
        
        for (int i = 0 ; i < prices.size(); i++){
            min_price = std::min(min_price , prices[i]);
            max_profit = std::max(prices[i] - min_price, max_profit);
        }
        return  max_profit;
        
    }
};

int main(){
    std::vector<int> prices = {7, 1, 5, 3, 6, 4};
    Solution solution;
    int result = solution.maxProfit(prices);
    std::cout << "Maximum profit: " << result << std::endl;
    return 0;
}

