1class Solution {
2public:
3    int lastStoneWeight(vector<int>& stones) {
4        int lastnode=0;
5        int n=stones.size();
6        priority_queue<int>p;
7        for(int i=0;i<n;i++)
8        {
9            p.push(stones[i]);
10        }
11        while(p.size()>1)
12        {
13            int max1=p.top();
14            p.pop();
15            int max2=p.top();
16            p.pop();
17            if(max1!=max2)
18            {
19                p.push(abs(max1-max2));
20            }
21        }
22        if(p.size()==0)
23        {return 0;
24        }else{
25             return p.top();
26        }
27       
28    }
29};