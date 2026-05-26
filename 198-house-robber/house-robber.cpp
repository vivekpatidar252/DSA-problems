class Solution {
public:
   int dp[101];
   int solve(vector<int> &nums , int index)
    {  
        int size = nums.size();
        if(index >= size)
        return 0;

        if (dp[index]!= -1){
            return dp[index];
        }

        //First house we will include
        int IncludeAns = nums[index] + solve(nums,index+2);

        //First house we do not include
        int ExcludeAns = 0 + solve(nums, index+1);

        int FinalAns = max(IncludeAns,ExcludeAns);
        dp[index] = FinalAns;
        return FinalAns;
    }





    int rob(vector<int>& nums) {
        int index = 0;
        memset(dp,-1,sizeof(dp));
        int ans = solve(nums,index);
        return ans;

        
    }
};