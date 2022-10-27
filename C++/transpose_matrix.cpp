https://leetcode.com/problems/transpose-matrix/

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int temp;
        vector<vector<int>> mt = matrix,  vec(matrix[0].size());
        for(int i =0; i< vec.size(); i++) 
            {
                for(int j=0;j<matrix.size(); j++){
                    vec[i].push_back(0);
                }
            }
        for(int i=0; i<matrix.size(); i++){
            for(int j=0;j<matrix[0].size(); j++){
                // cout<<vec[i][j]<<" ";
                // if(mt[i][j] == INT_MIN) continue;
                vec[j][i] = matrix[i][j];
                // vec[j][i] = matrix[i][j];
                // mt[i][j] = INT_MIN;mt[j][i] = INT_MIN;
            }
        }
        return vec;
    }
};
