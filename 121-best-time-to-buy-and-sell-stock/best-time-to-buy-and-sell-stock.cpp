class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy_price = prices[0];

        int profit = 0;

        for(int i=0; i<n; i++){
            if(buy_price > prices[i]){
                buy_price = prices[i];
            }else{
                int curr = prices[i] - buy_price;
                profit = max(profit, curr);
            }
        }
        return profit;
    }
};
