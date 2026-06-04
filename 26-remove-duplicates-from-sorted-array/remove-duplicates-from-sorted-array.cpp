class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int n = nums.size();
       int cm = 1;
       int unique = 1 ;
       int officer = 0;

       while(cm<n)
       {
        if(nums[cm]==nums[cm-1])
        {
            cm++;
            continue;
        }

        else
        {
          nums[++officer] = nums[cm];
          cm++;
          unique++;  
        }
       }

       return unique;
    }
};