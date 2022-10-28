//User function Template for C++

class Solution
{

  private:
    void find(int i, int j, int n, int m, vector<vector<int>> &grid, vector<int> path, vector<vector<int>>& paths) {
        if(i == n - 1 && j == m - 1) {
            path.push_back(grid[i][j]);
            paths.push_back(path);
            return;
        }
        
        path.push_back(grid[i][j]);
        
        if(i < n - 1)
            find(i + 1, j, n, m, grid, path, paths);
        
        
        if(j < m - 1)
            find(i, j + 1, n, m, grid, path, paths);
    }
    
public:
    vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
    {
        vector<int> v;

        vector<vector<int>> paths;
        find(0, 0, n, m, grid, v, paths);
        
        return paths;
    }
};