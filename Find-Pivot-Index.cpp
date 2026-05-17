1class Solution {
2public:
3    int pivotIndex(vector<int>& nums) {
4         int n= nums.size();
5         int totalsum=0;
6         for(int &x:nums)
7         {
8            totalsum+=x;
9         }
10         int leftsum=0;
11         for(int i=0;i<n;i++)
12         {
13            int rightsum = totalsum - leftsum - nums[i];
14            if(leftsum==rightsum)
15            {
16                return i;
17            }
18            leftsum+=nums[i];
19         }
20          return -1;
21    }
22};