class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n)
    {
      int j = n-1;
      int i = m-1;
      int idx = A.size()-1;

    

      while(i>=0 && j>=0)
      {
        if(A[i]<B[j])
        {
          A[idx] = B [j];
          idx--;
          j--;
        }

        else
        {
         A[idx]=A[i];
         idx--;
         i--;   
        }
      }

      while(i>=0)
      {
        A[idx] = A[i];
        idx--;
        i--;
      } 

      while(j>=0)
      {
       A[idx]=B[j];
       idx--;
       j--;
      }
        
    }
};