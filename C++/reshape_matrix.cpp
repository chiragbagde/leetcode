// https://leetcode.com/problems/reshape-the-matrix/

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(r*c != mat.size()*mat[0].size()){
            return  mat;
        }
        vector<vector<int>>vec(r, vector<int> (c, 0));
        int row=0,col=0;
        for(int i=0 ;i<mat.size(); i++){
            for(int j=0; j<mat[0].size(); j++){
                
            
               if(col < c){
                   // cout<<mat[i][j]<<" ";
                    vec[row][col] = mat[i][j];
                    col++;
                }
                else if(c == 1){
                    // cout<<mat[i][j]<<" ";
                   col=0;row++;   
                   vec[row][col] = mat[i][j];  
                    row++;
                }
                
                else{
                    cout<<mat[i][j]<<" ";
                    col=0;row++;   
                    vec[row][col] = mat[i][j];
                    col++;
                }
            }
        }
        return vec;
    }
};

