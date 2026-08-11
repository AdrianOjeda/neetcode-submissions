class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> cols;
        unordered_map<int, unordered_set<char>> rows;
        unordered_map<int, unordered_set<char>> box;

        for (int i =0; i< 9; i++){
            for(int j = 0; j<9; j++){
                char cell = board[i][j];
                if(cell == '.') continue;
                if(cols[j].find(cell) != cols[j].end() or rows[i].find(cell) != rows[i].end() or box[(i / 3) * 3 + j / 3].find(cell) != box[(i / 3) * 3 + j / 3].end()){
                    return false;
                }
                    cols[j].insert(cell);
                    rows[i].insert(cell);
                    box[(i / 3) * 3 + j / 3].insert(cell);
                

            }

        }
        return true;


        
    }
};
