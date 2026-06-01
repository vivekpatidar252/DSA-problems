class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
    int n = nums.size();
        int pivot = -1;

        // Step 1: Peeche se pehla i dhundo jahan nums[i] < nums[i+1]
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                pivot = i;
                break;
            }
        }

        // Agar pivot mila hi nahi → poora array descending hai → reverse karo
        if (pivot == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 2: Peeche se pehla element dhundo jo pivot se bada ho → swap
        for (int j = n - 1; j > pivot; j--) {
            if (nums[j] > nums[pivot]) {
                swap(nums[pivot], nums[j]);
                break;
            }
        }

        // Step 3: Pivot ke baad wala portion reverse karo
        reverse(nums.begin() + pivot + 1, nums.end());    
    }
};