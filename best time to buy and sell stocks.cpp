
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        // int max_profit=0;                                      //both solutions are using kadane's algorithm
        // int min_price =prices[0];
        // int profit;

        // for(auto stock_price:prices)
        // {
        //     min_price =min(stock_price , min_price);
        //     profit = stock_price - min_price;

        //     max_profit=max (profit , max_profit);
        // }
        // return max_profit;


        int min_price=prices[0];
        int max_profit=0;
        int profit;

        for(int i=0;i<prices.size();i++)
        {
            int curr=prices[i];

            min_price=min (curr, min_price);

            profit=curr-min_price;
             
            max_profit=max (profit, max_profit);
        }
        return max_profit;
    }
};
