class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int buy = 0;
        int sell = 1;
        int profit, maxProfit = 0;

        for(int i =0; i<prices.size(); i++){
            if(prices[buy]> prices[sell]){
                buy++;
                sell++;
            }else break;
        }
        cout<<"compra "<<prices[buy]<<" venta "<<prices[sell];

        for(sell; sell< prices.size(); sell++){
            profit = prices[sell] -prices[buy];
            maxProfit = max(profit, maxProfit);

            if(prices[sell]<prices[buy] and sell<prices.size()-1){
                buy = sell;
            }
        }




        
         return maxProfit;
        
    }
};
