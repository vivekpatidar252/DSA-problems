class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {

        int minimum = prices[0];
        int MaxP = 0;
        int cost = 0; 

        for(int i = 0 ; i<prices.size() ; i++)
        {
            cost = prices[i] - minimum;
            MaxP = max(MaxP , cost);
            minimum = min(minimum , prices[i]);
        }

        return MaxP;
        
    }
};