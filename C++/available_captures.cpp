https://leetcode.com/problems/available-captures-for-rook/


class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int row=0,col=0,count=0;
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[0].size(); j++){
                if(board[i][j] == 'R'){
                    row=i;col=j;
                    break;
                }
            }if(row) break;
        }
        cout<<row<<" "<<col;
        int lock=0,temp=0;
        for(int i = row-1; i>=0;i--){
            if(board[i][col] == 'p'){
                count++;break;
            }
            if(board[i][col] == 'B'){
                temp++;break;
            }
        }
         for(int i = row+1; i<board.size();i++){
            if(board[i][col] == 'p'){
                count++;break;
            }
            if(board[i][col] == 'B'){
                temp++;break;
            }
        }
        for(int i = col-1; i>=0;i--){
            if(board[row][i] == 'p'){
                count++;break;
            }
            if(board[row][i] == 'B'){
                temp++;break;
            }
        }
        for(int i = col+1; i<board.size();i++){
            if(board[row][i] == 'p'){
                count++;break;
            }
            if(board[row][i] == 'B'){
                temp++;break;
            }
        }
        return count;
        } 
        
        
    
};
