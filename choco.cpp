// Chocolate Distribution Problem

// GeeksForGeeks Solution: 
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit = 0;
        int mini = prices[0];

        for(int i=1;i<n;i++){
            mini = min(mini,prices[i]);
            int profit = prices[i] - mini;
            maxProfit = max(profit,maxProfit);
        }

        return maxProfit;
    }
};