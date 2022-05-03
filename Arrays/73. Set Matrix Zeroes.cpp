//problem link: https://leetcode.com/problems/set-matrix-zeroes/
class Solution {
public:
    
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int col0=1;
        //make a dummy array in the matrix itself
        //take first row and column as a dummy array to track zero appearing in particular row or column
        for(int i=0;i<m;i++){
            if(matrix[i][0]==0) col0=0;
            for(int j=1;j<n;j++){
                if(matrix[i][j]==0){
                  matrix[i][0]=matrix[0][j]=0;
                }
            }
        }
        //traverse reverse to put the zero
         for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=1;j--){
                //if vaule in the dummy row or col is zero than the value of that cell must be zero
                if(matrix[i][0]==0 || matrix[0][j]==0)
                  matrix[i][j]=0;
            }
                if(col0==0)
            matrix[i][0]=0;
                
         }
            }
      
};
