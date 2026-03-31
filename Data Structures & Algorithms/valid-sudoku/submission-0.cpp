class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<char>>colum(9);
        vector<set<char>>row(9);
        vector<set<char>>box(9);

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.')continue;

                if(row[i].count(board[i][j]))return false;
                else  row[i].insert(board[i][j]);

                if(colum[j].count(board[i][j]))return false;
                else  colum[j].insert(board[i][j]);

                
                int boxIndex=(i/3)*3+(j/3);

                if(box[boxIndex].count(board[i][j]))return false;
                else  box[boxIndex].insert(board[i][j]);

            }
        }


        return true;
        
    }
};
