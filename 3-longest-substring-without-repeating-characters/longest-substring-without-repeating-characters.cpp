class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int n = s.size();
        int low = 0;
        int high = 0;
        int result = INT_MIN;

        unordered_map<char,int>freq;

        for(high ; high  < n ; high++)
        {
            freq[s[high]]++;
            int k = high - low + 1;
             while(freq.size() < k)
             {
                freq[s[low]]--;

                if(freq[s[low]]==0)
                {
                    freq.erase(s[low]);
                }
                low++;
                k = high - low + 1;
             }
            int length = high - low + 1;
            result = max(result , length);
        }

        return (result==INT_MIN)?0:result;
        
    }
};