class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        
        sort(prices.rbegin(), prices.rend());
        sort(discounts.rbegin(), discounts.rend());

        int n = prices.size();
        int m = discounts.size();

        double ans = 0.0;

        for(int i=0; i<n; i++){

            if(i >= m){
                ans += (double)prices[i];
            }else{
                double first = 100 - discounts[i];
                double second = prices[i] * first;
                double third = second/100;

                ans += third;
            }
        }
        return ans;
    }
};