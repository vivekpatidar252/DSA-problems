class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>&A)
    {
        int res = INT_MIN;
        int count = 0;
        int n = A.size();
        for(int i = 0 ; i < n ; i++)
        {
          if(A[i]==1)
          {
            count++;
            res = max(res , count);
          }

          else
          {
            count = 0;
          }
        }

        return (res==INT_MIN) ? 0 : res;
        
    }
};