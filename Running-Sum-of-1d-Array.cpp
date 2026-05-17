1class Solution {
2public:
3    vector<int> runningSum(vector<int>& nums) {
4        
5        int n=nums.size();
6        vector<int>ans(n);
7        ans[0]=nums[0];
8        for(int i=1;i<n;i++)
9        {
10            ans[i]=ans[i-1]+nums[i];
11        }
12         return ans;
13    }
14};