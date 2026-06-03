#include<algorithm>
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size(); //Rows and col are equal so directly finding n
        for(int i = 0 ; i<n ; i++){ // First we will transpose the matrix 
           for(int j =i ; j<n ; j++){
                swap (matrix[i][j] ,matrix[j][i] ) ;
           }
           }
          for(int i = 0 ; i<n ; i++)
          reverse(matrix[i].begin(), matrix[i].end() ) ;//transpose lene ke bad reverse  krdenge       


    }
};