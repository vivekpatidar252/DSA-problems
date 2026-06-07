#include<climits>
class Solution {
public:
    int threeSumClosest(vector<int>& A , int target)
    {
        sort(A.begin() , A.end());
        int n  = A.size();
        int Finalans = 0;
        int diff = 0;
        int maxDiff = INT_MAX;
        for(int i = 0 ; i < n-2 ; i++){
        int left = i + 1;
        int right = n - 1;
        while(left < right)
        {
           int sum = A[i] + A[left] + A[right];
           diff = abs(sum - target);

           if(diff < maxDiff)
           {
            maxDiff = diff;
            Finalans = sum;
           } 

           if(sum == target)
           {
            return sum;
           }

           else if (sum > target)
           {
            right--;
           }

           else{
            left++;
           }
        }
        }

        return Finalans;
    }
};