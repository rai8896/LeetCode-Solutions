1class Solution {
2public:
3    int climbStairs(int n) {
4         if(n <= 2)
5            return n;
6
7        int prev2 = 1;
8        int prev1 = 2;
9
10        for(int i = 3; i <= n; i++)
11        {
12            int curr = prev1 + prev2;
13            prev2 = prev1;
14            prev1 = curr;
15        }
16
17        return prev1;
18    }
19        
20    
21};