1class Solution {
2public:
3    long long pickGifts(vector<int>& gifts, int k) {
4
5        long long sum=0;
6        priority_queue<int>p;
7        int n=gifts.size();
8        for(int i=0;i<n;i++)
9        {
10            p.push(gifts[i]);
11        }
12        while(k--)
13        {
14       long long x=p.top();
15       p.pop();
16       p.push(sqrt(x));
17
18        }
19        for(int i=0;i<n;i++)
20        {
21            sum=sum+p.top();
22            p.pop();
23        }
24    return sum;
25        
26    }
27};