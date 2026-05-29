class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<int> ans;
        int MaxCount = 0;
        int MaxIdx = 0;

        for (int i = 0; i < n; i++) {
            // ✅ count() works on ANY order — no sorting needed
            int ones = count(mat[i].begin(), mat[i].end(), 1);

            if (ones > MaxCount) {
                MaxCount = ones;
                MaxIdx = i;
            }
        }

        ans.push_back(MaxIdx);
        ans.push_back(MaxCount);
        return ans;
    }
};