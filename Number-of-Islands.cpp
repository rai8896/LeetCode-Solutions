1class Solution {
2public:
3void dfs(int i,int j,vector<vector<char>> &grid,int n, int m)
4{
5    if(i<0||j<0||i>=n||j>=m||grid[i][j]=='0')
6    {
7        return;
8    }
9         // mark visited
10        grid[i][j] = '0';
11         dfs(i+1, j, grid, n, m);
12        dfs(i-1, j, grid, n, m);
13        dfs(i, j+1, grid, n, m);
14        dfs(i, j-1, grid, n, m);
15
16}
17    int numIslands(vector<vector<char>>& grid) {
18         int n=grid.size();
19         int m=grid[0].size();
20            int count = 0;
21         for(int i=0;i<n;i++)
22         {
23        for(int j=0;j<m;j++)
24        {
25            if(grid[i][j]=='1')
26            {
27                count++;
28                dfs(i,j,grid,n,m);
29            }
30        }
31       
32         }
33          return count;
34
35    
36        
37    }
38};