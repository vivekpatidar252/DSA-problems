class Solution {
public:
    int totalFruit(vector<int>& A) 
    {
       int n = A.size();
       int low = 0;
       int high = 0;
       int result = INT_MIN;
       int length = 0;

       unordered_map<int,int>freq;

       for(high ; high < n ; high++)
       {
         freq[A[high]]++;
         while(freq.size() > 2)
         {
            freq[A[low]]--;
            if(freq[A[low]] == 0)
            {
                freq.erase(A[low]);
            }
            low++;
         }
         int length = high - low + 1;
         result = max(result , length);

       }

       return result;




    }
};