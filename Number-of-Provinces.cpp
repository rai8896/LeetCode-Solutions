1class Solution {
2public:
3    void dfs(int node, vector<int> adjLs[], vector<bool>& visited)
4    {
5        visited[node] = true;
6
7        for(int j = 0; j < adjLs[node].size(); j++)
8        {
9            if(!visited[adjLs[node][j]])
10            {
11                dfs(adjLs[node][j], adjLs, visited);
12            }
13        }
14    }
15
16    int findCircleNum(vector<vector<int>>& isConnected)
17    {
18        int V = isConnected.size();
19
20        vector<int> adjLs[V];
21
22        // convert matrix -> adjacency list
23        for(int i = 0; i < V; i++)
24        {
25            for(int j = 0; j < V; j++)
26            {
27                if(isConnected[i][j] == 1 && i != j)
28                {
29                    adjLs[i].push_back(j);
30                }
31            }
32        }
33
34        vector<bool> visited(V, false);
35        int count = 0;
36
37        for(int i = 0; i < V; i++)
38        {
39            if(!visited[i])
40            {
41                count++;
42                dfs(i, adjLs, visited);
43            }
44        }
45
46        return count;
47    }
48};