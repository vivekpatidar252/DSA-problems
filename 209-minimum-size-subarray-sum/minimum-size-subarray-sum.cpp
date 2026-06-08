class Solution {
public:
    int minSubArrayLen(int target, vector<int>&A)
    {
        int n = A.size();
        int low = 0 ;
        int high = 0 ; // variable window length hogi so dono pointer 0 se shru honge
        int result = INT_MAX;
        int sum = 0 ;

        while(high < n)
        {
          sum = sum + A[high];
          while(sum>=target)
          {
            int length = high - low + 1;
            result = min(result,length);
            sum = sum - A[low];
            low++;
          }
          high++;
        }

        return (result==INT_MAX) ? 0 : result;
    }
};