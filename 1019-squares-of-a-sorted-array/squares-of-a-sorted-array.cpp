class Solution {
public:
    vector<int> sortedSquares(vector<int>& A)
    {
        int n = A.size();
         for(int i = 0 ; i<n ; i++)
         {
            if(A[i]<0)
            {
             A[i] = -A[i];   
            }
         }
         sort(A.begin() , A.end());

         for(int i = 0 ; i < n ; i++)
         {
            A[i] = A[i] * A[i];
         }

         return A;
    }
};