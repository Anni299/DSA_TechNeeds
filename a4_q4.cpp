class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int profit=0;
        unsigned int base=INT_MIN;
        
        for(int i=0; i<prices.size(); i++){
            if(prices[i] < base){
                base=prices[i];
            }
            ans = prices[i] - base;

            if(profit < ans) profit=ans;
        }
        
        return profit;
    }
};
