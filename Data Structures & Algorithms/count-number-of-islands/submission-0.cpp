class Solution {
private:
    int directions[4][2] ={{1,0}, {-1, 0}, {0,1}, {0,-1}};

    void dfs(vector<vector<char>>& grid, int i, int j){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j] =='0'){
            return;
        }
        grid[i][j] = '0';
        for (int k = 0; k < 4; k++) {
            dfs(grid, i+ directions[k][0], j + directions[k][1]);
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        int columns = grid[0].size();

        int result = 0;

        for(int i = 0; i< rows; i++){
            for(int j = 0; j< columns; j++){
                if(grid[i][j]=='1'){
                    dfs(grid, i, j);
                    result++;
                }
            }
        }

        return result;
    }
};
