class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int , int > Freq;
         for(int i = 0 ; i < n ; i++)
         {
            int x = nums[i];
            Freq[x]++;
         }
          
         for(auto i : Freq)
         {
            if(i.second > n/2)
            {
                return i.first;
            }
         }
        return -1;
    }
};