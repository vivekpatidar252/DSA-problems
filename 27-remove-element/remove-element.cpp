class Solution {
public:
    int removeElement(vector<int>& A , int val) 
    {
     int n = A.size();
     int i = 0;
     int j = n-1;
     while(i<j)
     {
        if(A[i] == val && A[j]!=val)
        {
          swap(A[i],A[j]);
          i++;
          j--;  
        }

        else if(A[i]==val && A[j]==val)
        {
            j--;
            while(i<j && A[j]==val)
            {
                j--;
            }

            swap(A[i] , A[j]);
            i++;
            j--;
        }

        else{
            i++;
        }
     } 

     int k = 0;
     while( k<n &&A[k]!=val)
     {
        k++;
     } 

     return k ;
        
    }
};