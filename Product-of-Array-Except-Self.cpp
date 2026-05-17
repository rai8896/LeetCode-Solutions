1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4         int n = nums.size();
5
6        // approaxh Prefix product * suffix product
7        vector<int> prefix(n);
8        vector<int> suffix(n);
9        vector<int> ans(n);
10         prefix[0]=1;
11
12         // calculation of prefix product at that element
13          for(int i=1;i<n;i++)
14          {
15            prefix[i]=prefix[i-1]*nums[i-1];
16          }
17          suffix[n-1]=1;
18           for (int i=n-2;i>=0;i--)
19           {
20            suffix[i]=suffix[i+1]*nums[i+1];
21           }
22
23            for(int i = 0; i < n; i++)
24        {
25            ans[i] = prefix[i] * suffix[i];
26        }
27
28        return ans;
29
30        
31    }
32};