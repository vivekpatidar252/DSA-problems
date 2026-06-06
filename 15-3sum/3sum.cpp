class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& A)
    {
        sort(A.begin() , A.end());
        int n = A.size();
        vector<vector<int>> ans;        

        for(int i = 0 ; i < n-2 ; i++)
        {
           if(i>0 && A[i]==A[i-1]) //agr next element same rahega toh triplet same bn jaega
           continue;
           int left = i + 1;
           int right = n-1;
           int target = - A[i];

           while(left < right)
           {
            int sum = A[left] + A [right];
            if(sum==target){
               ans.push_back({A[i], A[left], A[right]});
                left++;
                right--;

                while(left < right  && A[left] == A[left-1])
                {
                    left++;
                }

                while(right>left && A[right] == A[right+1])
                {
                    right--;
                }
                 
            }

            else if (sum < target)
            {
                left++;
            }

            else
            {
               right--;
            }
           }


        }
        return ans;
        
    }
};