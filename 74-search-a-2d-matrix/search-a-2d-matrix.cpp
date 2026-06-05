#include<vector>
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int total = m*n;
        int s = 0;
        int e = total-1;
        while(s<=e){
        int mid = s- (s-e)/2;
        int rowInd = mid/n;; // memorize this formula
        int colInd = mid%n;

        if(matrix[rowInd][colInd]==target)
        return true;

        if(target<matrix[rowInd][colInd]){
            //move twrds left
            e = mid - 1 ;
        }
        else{
            //move towrds right
            s = mid+1;
            
                    }

       



        } 

        return false;









    }
};