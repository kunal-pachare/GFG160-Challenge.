class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
       
      /* int temp=0;
       int res=0;
       
       for(int i=0; i<prices.size(); i++){
           for(int j=i+1; j<prices.size(); j++){
               if(prices[i] < prices[j]){
                   res = max(res, prices[j]-prices[i]);
               }
           } 
       }
       return res;*/
       
       int min_price = prices[0];
       int pro = 0;
       
       for(int i=1; i<prices.size(); i++){
           
           min_price = min(prices[i], min_price);
           pro = max(pro, prices[i]-min_price);
       }
       return pro;
       
    }
};
