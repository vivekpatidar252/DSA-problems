class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) 
    {
     //First we find ki kaha tk negative elemnt h array me and usko postivr kregne and
     //then reverse
    long long int n = A.size();
    long long int i = 0;
    long long int j = 0;
     long long int idx = 0;
     while(i<n && A[i]<0)
     {
        A[i] = -A[i];
        A[i] = A[i]*A[i];
        i++;
     } 
     j=i;
    int  m = i; 
     reverse(A.begin() ,A.begin()+i);

    while(j<n){
        A[j] = A[j]*A[j];
        j++;
    } 

    i=0;
    j = m;
    vector<int>ans(n);

    while(i<m && j<A.size())
    {
      if(A[i]<A[j])
      {
      ans[idx] = A[i];
      i++;
      idx++;
      }
      else
      {
      ans[idx] = A[j];
      idx++;
      j++;  
      }
    }
    while(j<n)
    {
     ans[idx] = A[j];
     idx++;
     j++;
    }

    while(i<m)
    {
     ans[idx] = A[i];
     idx++;
     i++;
    }

    return ans;

    }
};