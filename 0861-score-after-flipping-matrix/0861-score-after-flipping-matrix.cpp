
class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        auto row_size = grid.size();
        auto col_size = grid[0].size();
        
        for(int i=0; i<row_size; i++) {
            if(grid[i][0] == 0) {
                for(int j=0; j<col_size; j++) {
                    grid[i][j] = 1 - grid[i][j];
                }
            }
        }
        
        for(int j=1; j<col_size; j++) {
            int cnt = 0;
            for(int i=0; i<row_size; i++) {
                if(grid[i][j] == 0) cnt++;
            }
            
            if(cnt <= row_size - cnt) continue;
            for(int i=0; i<row_size; i++) {
                grid[i][j] = 1- grid[i][j];
            }
        }
        
        int result = 0;
        for(int i=0; i<row_size; i++) {
            for(int j=0; j<col_size; j++) {
                result += (grid[i][j] << (col_size - j - 1));
            }
        }
        return result;
    }
};