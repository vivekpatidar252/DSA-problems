class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
     sort(intervals.begin(), intervals.end());  
    vector<vector<int>> res = {intervals[0]};

    for (int i = 1; i < intervals.size(); i++) {
        auto& cur = intervals[i];
        auto& prev = res.back();

        if (cur[0] <= prev[1])            
            prev[1] = max(prev[1], cur[1]); 
        else
            res.push_back(cur);             
    }
    return res;


    }
};