class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int islands = 0;
        for(int i=0;i<grid.size();i++) {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]=='1'){
                    islands++;
                    dfs(i,j,grid);
                }
            }
        }

        return islands;
    }

    void dfs(int x, int y, vector<vector<char>>& grid){
        
        if(x<0 || y<0 || x>=grid.size() || y>=grid[0].size() || grid[x][y] == '0') {
            return; 
        }

        grid[x][y] = '0';

        dfs(x+1,y,grid);
        dfs(x,y+1,grid);
        dfs(x-1,y,grid);
        dfs(x,y-1,grid);

        return;

    }
};
