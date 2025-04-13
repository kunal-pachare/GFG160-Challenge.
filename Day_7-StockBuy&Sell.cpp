class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        //we 2 approach 
        //  approch 1
        int res = 0;
        int n = prices.size();
        
        for( int i=1; i<n; i++){
            
            if(prices[i] > prices[i-1]){
                res += prices[i] - prices[i-1];
            }
        }
        return res;
        
        }
};
