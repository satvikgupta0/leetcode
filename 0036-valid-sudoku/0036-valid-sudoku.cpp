class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<int>> row(9);
        vector<unordered_set<int>> col(9);
        vector<unordered_set<int>> boxes(9);

        for(int i=0;i<board.size();i++){
            for(int j=0;j<board.size();j++){
                char x = board[i][j];
                if(x=='.') continue;
                int box=(i/3)*3+(j/3);

                if(row[i].count(x)) return false;

                if(col[j].count(x)) return false;

                if(boxes[box].count(x)) return false;


                row[i].insert(x);
                col[j].insert(x);
                boxes[box].insert(x);
            }
        }
        return true;
    }
};