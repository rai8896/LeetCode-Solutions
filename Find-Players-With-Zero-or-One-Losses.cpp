1class Solution {
2public:
3    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
4        unordered_map<int,int>lost_map;//key:player num ,value:count of lost
5        // for(auto &it:matches)
6        // {
7
8        // }
9        for(int i=0;i<matches.size();i++)
10        {
11            int loser=matches[i][1];
12            lost_map[loser]++;
13
14        }
15        vector<int>notlost;
16        vector<int>onelost;
17            for(int i=0;i<matches.size();i++)
18            {
19                int winner=matches[i][0];
20                int loser=matches[i][1];
21                // agr winner kabhi lost nhi kiya hai
22                if(lost_map.find(winner)==lost_map.end())
23                {
24                    notlost.push_back(winner);
25                    lost_map[winner]=2;
26                }
27                if(lost_map[loser]==1)
28                {
29                    onelost.push_back(loser);
30
31                }
32
33            }
34            sort(begin(onelost),end(onelost));
35            sort(begin(notlost),end(notlost));
36
37
38
39
40        return{notlost,onelost};
41
42        
43    }
44};