1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4
5        int n = nums.size();
6        int k = 1;
7
8        for(int i = 1; i < n; i++)
9        {
10            if(nums[i] != nums[i-1])
11            {
12                nums[k] = nums[i];
13                k++;
14            }
15        }
16
17        return k;
18        
19    }
20};