#include<utility>
class Solution {
public:
    vector<int> twoSum(vector<int>& A, int target) 
    {
    //Sorted array given hai 
    //extra space nhi chiye
    //index find krne hai 
    //So would go for 2 pointers
    int n = A.size();
    int sum = 0;
    pair<int , int > ans;
    int i = 0;
    int j = n-1;
    
    while(i<j)
    {
     
            sum = A[i] + A[j];

            if(sum == target)
            {
            ans.first = i+1;
            ans.second = j+1;
            return {ans.first , ans.second}; 
            }

            else if (target < sum)
            {
                j--;
            }

            else
            {
               i++; 
            }
        
    }

    return {-1 , -1};

    }    
    
};