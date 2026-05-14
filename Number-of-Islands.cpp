1class Solution {
2public:
3    void bfs(int row,int col,vector<vector<int>>&vis,vector<vector<char>>& grid)
4    {
5        vis[row][col]=1;
6        queue<pair<int,int>>q;
7        q.push({row,col});
8        int n=grid.size();
9        int m=grid[0].size();
10        while(!q.empty())
11        {
12            int row=q.front().first;
13            int col=q.front().second;
14            q.pop();
15
16            //traverse in the neighbours and mark them if its a land
17            for(int delrow=-1;delrow<=1;delrow++)
18            {
19                for(int delcol=-1;delcol<=1;delcol++)
20                {
21                    if(abs(delrow) + abs(delcol) != 1)
22                     continue;
23                    int nrow=row+delrow;
24                    int ncol=col+delcol;
25                    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]=='1' && !vis[nrow][ncol])
26                    {
27                        vis[nrow][ncol]=1;
28                        q.push({nrow,ncol});
29                    }
30                }
31            }
32        }
33    }
34    int numIslands(vector<vector<char>>& grid) {
35        int n= grid.size();
36        int m=grid[0].size();
37        vector<vector<int>>vis(n,vector<int>(m,0));
38        int count=0;
39        for(int row=0;row<n;row++)
40        {
41            for(int col=0;col<m;col++)
42            {
43                if(!vis[row][col] &&grid[row][col]=='1')
44                {
45                    count++;
46                    bfs(row,col,vis,grid);
47
48                }
49            }
50        }
51        return count;
52    
53
54        
55    }
56};