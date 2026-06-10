int maxget(vector<int>f)
{
    int maxc = -1;
    for(int i = 0 ; i < 256 ; i++)
    {
        maxc = max(maxc , f[i]);
    }

    return maxc;
}




class Solution {
public:
    int characterReplacement(string s, int k) 
    {
     int n = s.size();
     int low = 0;
     int high = 0;
     int res = INT_MIN;
     int maxcnt = 0;
     vector<int> f (256 , 0);

     for(high ; high < n ; high++)
     {
        f[s[high]]++;
         maxcnt = maxget(f);
        int len = high - low + 1;
        int diff = len - maxcnt ;

        while(diff > k)
        {
          f[s[low]]--;
          low++;
          maxcnt = maxget(f);
          len = high - low + 1;
          diff = len - maxcnt ;

        }

        len = high - low + 1;
        res = max(res , len);

     }   

     return res;
    }
};