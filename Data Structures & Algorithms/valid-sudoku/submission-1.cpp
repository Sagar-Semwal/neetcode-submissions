class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

       for (int i = 0; i < 9; i++) {
    unordered_set<char> row;

    for (int j = 0; j < 9; j++) {

        if (board[i][j] == '.') continue;

        if (row.find(board[i][j]) != row.end()) {
            return false;
        }

        row.insert(board[i][j]);
    }
    
}

for (int i = 0; i < 9; i++) {
    unordered_set<char> col;

    for (int j = 0; j < 9; j++) {

        if (board[j][i] == '.') continue;

        if (col.find(board[j][i]) != col.end()) {
            return false;
        }

        col.insert(board[j][i]);
    }
}

for(int i=0;i<9;i+=3){
    for(int j=0;j<9;j+=3){
            unordered_set<char>box;

        for(int x=i;x<i+3;x++){
            for(int y=j;y<j+3;y++){
                if(board[x][y]=='.') continue;
                if(box.find(board[x][y])!=box.end()){
                    return false;
                }

                box.insert(board[x][y]);

            }
        }

    }
}

return true;

        
    }
};
