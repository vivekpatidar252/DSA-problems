#include<vector>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
            int max = 0;
            int n = prices.size();
            int temp = 0;
            int arr = 0;
            
        for( int i = 0 ; i < n ; i++)
        {
             if(i==0)
             {
                arr = prices[i]+1 ;
             }
             temp = prices[i];
             if(prices[i]<arr)
             {
                for(int j = i+1 ; j < n ; j++)
                {
                    if(prices[j]>temp)
                    {
                        temp = prices[j];
                    }
                }
                if(prices[i]< temp)
                {
                if(max<(temp - prices[i]))
                {
                    max = temp - prices[i];
                }
                }
             arr = prices[i];
             }
             
        }
        return max;
        
    }
};