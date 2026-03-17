1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4
5
6        int left = 0, right = nums.size() - 1;
7        
8        while (left <= right) {
9            int mid = left + (right - left) / 2;
10            
11            if (nums[mid] == target) {
12                return mid;  // found
13            }
14            else if (nums[mid] < target) {
15                left = mid + 1;
16            }
17            else {
18                right = mid - 1;
19            }
20        }
21        
22        // target not found → insertion position
23        return left;
24        
25    }
26};