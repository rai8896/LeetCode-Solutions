1class Solution {
2public:
3    int findKthLargest(vector<int>& nums, int k) {
4
5        priority_queue<int,vector<int>,greater<int>>p;
6
7        //k elemnent ko insert kro
8        for(int i=0;i<k;i++)
9        {
10            p.push(nums[i]);
11        } 
12        for(int i=k;i<nums.size();i++)
13        {
14            if(nums[i]>p.top())
15            {
16                p.pop();
17                p.push(nums[i]);
18            }
19        } 
20        return p.top();      
21    }
22};